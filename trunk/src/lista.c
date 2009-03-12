#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

#ifndef _LISTA_C_
#define _LISTA_C_

struct tac *create_inst_tac(const char *res, const char *arg1, const char *op, const char *arg2) 
{
	struct tac *t = (struct tac *)malloc(sizeof(struct tac));

	t->op = (char*)malloc(sizeof(char)*(1+strlen(op)));
	strcpy(t->op, op);

	t->res = (char*)malloc(sizeof(char)*(1+strlen(res)));
	strcpy(t->res, res);

	t->arg1 = (char*)malloc(sizeof(char)*(1+strlen(arg1)));
	strcpy(t->arg1, arg1);

	t->arg2 = (char*)malloc(sizeof(char)*(1+strlen(arg2)));
	strcpy(t->arg2, arg2);

	return (t);
}

void print_inst_tac(FILE *out, struct tac i)
{
	fprintf(out, "%s\t:= %s %s %s\n", i.res, i.arg1, i.op, i.arg2);
}

void print_tac(FILE *out, struct node_tac *code)
{
	struct node_tac *qq;
	qq = code;

	while(qq) {
		print_inst_tac(out, *(qq->inst));
		qq = qq->next;
	}
}

void append_inst_tac(struct node_tac **code_ref, struct tac *inst) 
{
	struct node_tac *qq;
	struct node_tac *qqprev = NULL;

	// if instruction is NULL
	if(inst == NULL) return;
	
	// if empty
	// must be done separatedly because code_ref must be changed
	if(!(*code_ref)) {
		*code_ref = (struct node_tac *)malloc(sizeof(struct node_tac));
		(*code_ref)->inst = create_inst_tac(inst->res, inst->arg1, inst->op, inst->arg2);
		(*code_ref)->prev = NULL;
		(*code_ref)->next = NULL;
		return;
	}

	qq = *code_ref;

	while(qq) {
		qqprev = qq;
		qq = qq->next;
	}

	qq = (struct node_tac *)malloc(sizeof(struct node_tac));
	qq->inst = create_inst_tac(inst->res, inst->arg1, inst->op, inst->arg2);
	qq->prev = qqprev;
	qq->next = NULL;
	qq->prev->next = qq;
}

void cat_tac(struct node_tac **code_a, struct node_tac **code_b)
{
	struct node_tac *qq, *qqprev = NULL;
	qq = *code_a;

	// if lists are NULL
	if((*code_a == NULL)||(*code_b == NULL)) return;

	while(qq) {
		qqprev = qq;
		qq = qq->next;
	}

	qq = (struct node_tac *)malloc(sizeof(struct node_tac));
	qq->inst = (*code_b)->inst;
	qq->prev = qqprev;
	qq->next = (*code_b)->next;
	qq->prev->next = qq;
}

#endif
