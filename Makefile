all:
	bison -v trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input.txt


input:
	bison -v trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input.txt

input2:
	bison -v trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input2.txt

input3:
	bison -v trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input3.txt