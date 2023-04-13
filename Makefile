all:
	bison trad1.y
	gcc -Wall trad1.tab.c -o trad
	./trad < input.txt