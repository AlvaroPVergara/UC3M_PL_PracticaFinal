/* Joan Carlos Naftanaila, Alvaro Perez Vergara G74
100451199@alumnos.uc3m.es 100451185@alumnos.uc3m.es
*/
%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para code
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

char *code_generated;
char *act_function;
char *concat_ptr;

// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
        char *code2 ; 
        int isbool ; // 1 if is bool, 0 if aricmetic
} t_attr ;

#define YYSTYPE t_attr

%}

// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identificador=variable
%token INTEGER       // identifica el tipo entero
%token STRING
%token MAIN          // identifica el comienzo del proc. main
%token WHILE
%token FOR         
%token IF
%token ELSE
%token PUTS
%token PRINTF
%token AND          // tokens logical
%token OR  
%token LEQ          // lesser or equal
%token GEQ          // greater or equal
%token EQ           // EQ
%token NEQ          // NEQ
%token RETURN


// Definitions for implicit attributes.
// USE THESE ONLY AT YOUR OWN RISK
/*

%union {                      // El tipo de la pila tiene caracter dual
    int value ;             // - valor numerico de un NUMERO
    char *code ;          // - para pasar los nombres de IDENTIFES
}

%token <value> NUMBER       // Todos los token tienen un tipo para la pila
%token <code> IDENTIF       // Identificador=variable
%token <code> INTEGER       // identifica la definicion de un entero
%token <code> STRING
%token <code> MAIN          // identifica el comienzo del proc. main
%token <code> WHILE         // identifica el bucle main

%type <...> Axiom ...

*/

%right '='                    // es la ultima operacion que se debe realizar
%left OR
%left AND
%left EQ NEQ
%left '<' LEQ '>' GEQ
%left '+' '-'                 // menor orden de precedencia
%left '*' '/'                 // orden de precedencia intermedio
%left UNARY_SIGN              // mayor orden de precedencia

%%                            // Seccion 3 Gramatica - Semantico

/* El axioma debe poder derivar la estructura de un programa en C que es: <Decl Variables> <Def Funciones>. */


axioma:      declaracionesGlob  funcionesDef  mainDef 	{ ; }
            ;
            

/*------------ GLOBAL DECLARATION VARIABLE MANAGEMENT ------------*/
declaracionesGlob:                                                              { ; }
                        | declaracionesGlobRec ';' declaracionesGlob            { ; }
                        ;

declaracionesGlobRec:   INTEGER IDENTIF restGlobVar restDeclaracionesGlob   { if ($3.code==NULL){
                                                                                    printf("(setq %s %d)%s\n", $2.code, $3.value, $4.code);
                                                                                } else{
                                                                                    printf("(setq %s %s)%s\n", $2.code, $3.code, $4.code);
                                                                                }
                                                                            }
                        ;

restDeclaracionesGlob:                                                      { $$.code = ""; }
                        | ',' IDENTIF restGlobVar restDeclaracionesGlob     { if ($3.code==NULL){
                                                                                    sprintf(temp, " (setq %s %d)%s", $2.code, $3.value, $4.code);
                                                                                    $$.code = gen_code(temp);
                                                                                } else {
                                                                                    sprintf(temp, " (setq %s %s)%s", $2.code, $3.code, $4.code);
                                                                                    $$.code = gen_code(temp);
                                                                                }
                                                                            }
                        ;

restGlobVar:                    { $$.value = 0; 
                                    $$.code = NULL;}
            | '=' NUMBER        { $$.value = $2.value; 
                                    $$.code = NULL;}
            | '[' NUMBER ']'    { sprintf(temp, "(make-array %d)", $2.value);
								    $$.code = gen_code(temp); }
            ;


/*------------ FUNCTIONS DECLARATION MANAGEMENT ------------*/
funcionesDef:                                       { ; }
            |   IDENTIF '(' funcionArgs ')'  '{'    { printf("(defun %s (%s)\n", $1.code, $3.code); 
                                                        act_function = $1.code;
                                                    }
                recSentenciaFin                     { ; }
                                                    { act_function = NULL; }
                funcionesDef                        { ; }
            ;

funcionArgs:                                { $$.code = ""; }
            |  INTEGER varIdentf recArgFunct {    if( $3.code == NULL)    {
                                                    sprintf(temp, "%s",  $2.code);
                                                } else{
                                                    sprintf(temp, "%s %s", $2.code, $3.code);
                                                }
                                                $$.code = gen_code(temp);
                                            }
            ;

recArgFunct:                        { $$.code = NULL; }
			 | ',' funcionArgs		{ $$.code = $2.code; }
             ;



/*------------ MAIN FUNCTION DECLARATION MANAGEMENT ------------*/
                                                    
mainDef: MAIN '(' ')' '{'           { printf("(defun main ()\n");
                                        act_function = "main"; 
                                    }
                    recSentenciaFin    { ; }
                                    { ; }
                    ;


/*------------ STATEMENT LEVEL ------------*/
recSentenciaFin:      '}'                              { printf(")\n"); }
                    |   RETURN expresionAric ';' '}'       { printf("%s\n)\n", $2.code); } 
                    |   RETURN expresionAric ';'           { printf("(return-from %s %s)\n", act_function, $2.code); }
                        recSentenciaNoFin              { ; }
                    |   sentencia                      { if ($1.code) { printf("%s\n", $1.code); }}
                        recSentenciaFin                { ; }
                    ;

recSentenciaNoFin:      RETURN expresionAric ';' '}'   { printf("%s\n)\n", $2.code); }
                    |   RETURN expresionAric ';'       { printf("(return-from %s %s)", act_function, $2.code); }
                        recSentenciaNoFin          { ; }
                    |   sentencia                  { if ($1.code) { printf("%s\n", $1.code); }}
                        recSentenciaFin            { ; }

recSentenciaCond:   '}'                            {printf(")\n"); }
                    |   sentencia                  { if ($1.code) { printf("%s\n", $1.code); }}
                        recSentenciaCond           { ; }
                    |   RETURN expresionAric ';'       { printf("(return-from %s %s)", act_function, $2.code); }
                        recSentenciaCond           { ; }   
                    ;    


sentencia:     declaraciones ';'                                { $$.code = $1.code; }
            |   asignacion  ';'                                 { $$.code = $1.code; }

            | PRINTF '(' STRING ',' expresion printRec ')' ';'  { if ($6.code) {
                                                                    sprintf (temp, "(print %s) %s", $5.code, $6.code);
                                                                 } else {
                                                                    sprintf (temp, "(print %s)", $5.code);
                                                                 }
                                                                $$.code = gen_code (temp) ; 
                                                                }
                                                       

            | PUTS '('  STRING  ')' ';'                         { sprintf(temp, "(print \"%s\")",$4.code);
                                                                    $$.code = gen_code (temp) ; }
            | sentenciaWhile                                    { $$.code = NULL; } 
            | sentenciaIF                                       { $$.code = NULL; }
            | sentenciaFOR                                      { $$.code = NULL; }
            | funcionLlamada   ';'                              { $$.code = $1.code; }
            ;
                                                        

//TODO: eliminar if else si al final no es necesario
declaraciones: INTEGER IDENTIF restVar restDeclaraciones        { if ($3.value==0){
                                                                    sprintf(temp,"(setq %s %s)%s", $2.code, $3.code, $4.code);
                                                                } else{
                                                                    sprintf(temp,"(setq %s %s)%s", $2.code, $3.code, $4.code);
                                                                } 
                                                                    $$.code = gen_code(temp);
                                                                 }
                ;

restDeclaraciones:                                                  { $$.code = ""; }
                    | ',' IDENTIF restVar restDeclaraciones     { sprintf(temp, " (setq %s %s)%s", $2.code, $3.code, $4.code);
                                                                  $$.code = gen_code(temp);
                                                                }
                    ;

restVar:                        { $$.code = "0";}
            | '=' expresionAric { $$.code = $2.code;}
            | '[' NUMBER ']'    { sprintf(temp, "(make-array %d)", $2.value);
								    $$.code = gen_code(temp); }
            ;


asignacion: IDENTIF '[' NUMBER ']' '=' expresionAric  {  if ($2.code == NULL){
                                                sprintf (temp, "(setq %s %s)", $1.code, $4.code) ; 
                                            } else{
                                                sprintf (temp, "(setf (aref %s %s) %s)", $1.code, $2.code, $4.code) ;
                                            }
                                            $$.code = gen_code (temp) ; }
            | IDENTIF  asignacionMultiple expresionAric  { if ($2.code == NULL){
                                                                sprintf (temp, "(setq %s %s)", $1.code, $3.code);
                                                            } else {
                                                                sprintf (temp, "(setf (values %s %s) (values %s %s))", $1.code, $2.code, $2.code2, $3.code );
                                                            }
                                                        $$.code = gen_code (temp);
                                                        }
            ;

asignacionMultiple: '='  { $$.code = NULL; }
                    | ',' IDENTIF asignacionMultiple expresionAric ',' { if ($3.code == NULL){
                                                                            $$.code = $2.code;
                                                                            $$.code2 = $4.code;
                                                                        } else {
                                                                            sprintf (temp, "%s %s", $2.code, $3.code);
                                                                            $$.code = gen_code (temp);
                                                                            sprintf (temp, "%s %s", $3.code2, $4.code);
                                                                            $$.code2 = gen_code (temp);
                                                                        }
                                                                        }


sentenciaWhile: WHILE '(' expresionBool  ')' '{'   {  printf("(loop while %s do \n", $3.code); }
                recSentenciaCond                        { ; }
            ;


sentenciaIF: IF '(' expresionBool  ')' '{'     {  printf("(if %s\n(progn ", $3.code); }
                recSentenciaCond                    { ; }
                restoIF                         { ; }
            ;

restoIF:                        { printf(")\n"); }
        | ELSE '{'              { printf("(progn "); }
            recSentenciaCond    { ; }
                                { printf(")\n"); }
        ;


sentenciaFOR: FOR '(' declaracionFor ';' expresionBool ';' asignacion ')' '{'    {printf("(loop while %s do \n", $5.code);}
                recSentenciaCond                                                        { ; }
                                                                                    {printf("%s\n)\n",$7.code);}  
                ;    


declaracionFor: INTEGER IDENTIF restVar     {  sprintf(temp,"(setq %s %s)%s\n", $2.code, $3.code, $3.code);
                                            $$.code = gen_code(temp); }
                ;

printRec:                               { $$.code = NULL; }
            | ',' expresion printRec    { if ($3.code)
                                                sprintf (temp, "(print %s) %s", $2.code, $3.code);
                                          else
                                                sprintf (temp, "(print %s)", $2.code); 
                                           $$.code = gen_code (temp) ; }
            ;

/* ------------------------------------- EXPRESSION LEVEL --------------------------------------- */

expresionBool: expresion        { if ( $1.isbool == 0){
                                    sprintf(temp, "(/= 0 %s)", $1.code);
                                    $$.code = gen_code(temp);
                                  } else{
                                    $$.code = $1.code;
                                  }
                                }
            ;

expresionAric: expresion        { if ( $1.isbool == 1){
                                    sprintf(temp, "(if %s 1 0)", $1.code);
                                    $$.code = gen_code(temp);
                                  } else{
                                    $$.code = $1.code;
                                  }
                                }
            ;


expresion: termino                     { $$.code = $1.code ;
                                         $$.value = $1.value ;
                                        // Never translate terms
                                         $$.isbool = 2; }
            | expresion AND expresion  { concat_ptr = temp; 
                                        concat_ptr += sprintf(concat_ptr, "(and ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion OR expresion  { concat_ptr = temp; 
                                        concat_ptr += sprintf(concat_ptr, "(or ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion NEQ expresion  {concat_ptr = temp;  
                                        concat_ptr += sprintf(concat_ptr, "(/= ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion EQ expresion   { concat_ptr = temp;  
                                        concat_ptr += sprintf(concat_ptr, "(== ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion '<' expresion  {concat_ptr = temp;   
                                        concat_ptr += sprintf(concat_ptr, "(< ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion LEQ expresion  { concat_ptr = temp;  
                                        concat_ptr += sprintf(concat_ptr, "(<= ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion '>' expresion  {concat_ptr = temp;   
                                        concat_ptr += sprintf(concat_ptr, "(> ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
            | expresion GEQ expresion  {concat_ptr = temp;    
                                        concat_ptr += sprintf(concat_ptr, "(>= ");
                                        if ($1.isbool == 0){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 0){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(/= 0 %s))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 1;
                                        $$.code = gen_code (temp) ; 
                                        }
                                        
            // Arithmetic expressions tranlsated to boolean expressions
            |   expresion '+' expresion  { concat_ptr = temp;
                                        concat_ptr += sprintf(concat_ptr, "(+ ");
                                        if ($1.isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 0;
                                        $$.code = gen_code (temp) ; 
                                        }
            |   expresion '-' expresion  { concat_ptr = temp;
                                        concat_ptr += sprintf(concat_ptr, "(- ");
                                        if ($1.isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 0;
                                        $$.code = gen_code (temp) ; 
                                        }
            |   expresion '*' expresion  { concat_ptr = temp;
                                        concat_ptr += sprintf(concat_ptr, "(* ");
                                        if ($1.isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 0;
                                        $$.code = gen_code (temp) ; 
                                        }
            |   expresion '/' expresion  {concat_ptr = temp; 
                                        concat_ptr += sprintf(concat_ptr, "(/ ");
                                        if ($1.isbool == 1){
                                            // Concat $1 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0) ", $1.code);
                                        } else {
                                            // Concat $1 as is
                                            concat_ptr += sprintf(concat_ptr, "%s ", $1.code);
                                        }
                                        if ($3.isbool == 1){
                                            // Concat $3 transformed
                                            concat_ptr += sprintf(concat_ptr, "(if %s 1 0))", $3.code);
                                        } else {
                                            concat_ptr += sprintf(concat_ptr, "%s )", $3.code);
                                        }
                                        $$.isbool = 0;
                                        $$.code = gen_code (temp) ; 
                                        }
            ;

termino:        operando                           { $$ = $1 ; }                          
            |   '+' operando %prec UNARY_SIGN      { sprintf (temp, "(+ %s)", $2.code) ;
                                                     $$.code = gen_code (temp) ; }
            |   '-' operando %prec UNARY_SIGN      { sprintf (temp, "(- %s)", $2.code) ;
                                                     $$.code = gen_code (temp) ; }    
            ;

operando:      varIdentf                 { $$.code = $1.code ; }
            |   NUMBER                   { sprintf (temp, "%d", $1.value) ;
                                           $$.code = gen_code (temp) ; }
            |   '(' expresionAric ')'     { $$ = $2 ; }
            | funcionLlamada             { $$.code = $1.code;}
            ;


varIdentf:  IDENTIF isVector               {if ($2.code == NULL){
                                                    sprintf (temp, "%s", $1.code);
                                                } else {
                                                    sprintf (temp, "(aref %s %s)", $1.code, $2.code);
                                                }
                                                $$.code = gen_code (temp); }
            ;

isVector:                                      { $$.code = NULL; }
            |  '[' NUMBER ']'                  { sprintf(temp, "%d", $2.value); $$.code = gen_code(temp);}
            ;

funcionLlamada: IDENTIF '(' funcionArgsLlamada ')'      { sprintf(temp,"(%s %s)", $1.code, $3.code);
                                                            $$.code = gen_code(temp);
                                                        }
            ;

funcionArgsLlamada:                                     { $$.code = ""; }
                    |  expresionAric recArgFunctLlamada    {   if( $2.code == NULL)    {
                                                                sprintf(temp, "%s",  $1.code);
                                                            } else{
                                                                sprintf(temp, "%s %s", $1.code, $2.code);
                                                            }
                                                            $$.code = gen_code(temp);
                                                        }
                    ;

recArgFunctLlamada:                        { $$.code = NULL; }
			 | ',' funcionArgsLlamada		{ $$.code = $2.code; }
             ;


%%                            // SECCION 4    Codigo en C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memoria left for additional %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes reserved in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "while",       WHILE,
    "for",         FOR,
    "if",          IF,
    "else",        ELSE,
    "&&",          AND,
    "||",          OR,
    "<=",          LEQ,
    ">=",          GEQ,
    "==",          EQ,
    "!=",          NEQ,
    "return",      RETURN,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] = "!<=>|%/&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == '\r' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // busca c en operadores expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
