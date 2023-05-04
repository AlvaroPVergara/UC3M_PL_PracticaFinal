all:
	bison trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input.txt


input:
	bison trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input.txt

input2:
	bison trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input2.txt

input3:
	bison trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input3.txt