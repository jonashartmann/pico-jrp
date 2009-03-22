CC = gcc
LDFLAGS = -g

all: etapa1 pico 

## Etapa 1:
etapa1: symbol_table.h
	gcc -c symbol_table.c

## Etapa 2:
pico: pico.c
	gcc -o pico lex.yy.c symbol_table.o

pico.c: scanner.l tokens.h symbol_table.h
	flex scanner.l;


clean:
	rm -f *.o lex.yy.?
	rm pico
