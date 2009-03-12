CC = gcc
LDFLAGS = -g

all: etapa1

etapa1: symbol_table.o lista.o node.o doc

doc: Doxyfile $(HEAD1)
	doxygen Doxyfile

symbol_table.o: symbol_table.c symbol_table.h
	$(CC) $(LDFLAGS) -c symbol_table.c

lista.o: lista.h lista.c
	$(CC) $(LDFLAGS) -c lista.c

node.o: node.h node.c
	$(CC) $(LDFLAGS) -c node.c

## Usado na Etapas seguintes:
lex.yy.c: lexer.l
	flex lexer.l

pico: parser.y lex.yy.c ../objects/node.o 
	yacc -d parser.y ; mv y.tab.h tokens.h
	gcc -g -o pico y.tab.c -I ../include ../objects/node.o -ly -lfl

clean:
	rm -f *.o tokens.h lex.yy.? y.tab.?
