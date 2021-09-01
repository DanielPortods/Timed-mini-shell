FLAGS = -Wall -O2 -static -lm

compile:
	gcc -o timed-mini-shell timed-mini-shell.c $(FLAGS)

run:	compile
	./timed-mini-shell
