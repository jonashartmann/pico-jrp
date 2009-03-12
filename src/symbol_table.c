#include "symbol_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hashpjw(char *s) {
   char *p;
   unsigned h = 0, g;
   for (p = s; *p != EOS; p = p+1) {
      h = (h << 4) + (*p);
      if (g = h&0xf0000000) {
         h = h ^ (g >> 24);
         h = h ^ g;
      }
   }
   return h % TABLE_SIZE;
}

int init_table(symbol_t* table) {
   int i;
   for (i = 0; i < TABLE_SIZE; i++){
      table->hash_t[i] = NULL;
   }
   return(0);
}

void free_table(symbol_t* table) {
   int i;
   for (i = 0; i < TABLE_SIZE; i++)
   {
   	listNode *prox, *atual;
   	atual = table->hash_t[i];

   	while ( atual != NULL )
   	{
   	   	prox = atual->next;

   		free(atual->next);
   		free(atual->prev);
   		atual = prox;
   	}
   }
}

entry_t* lookup(symbol_t table, char* name) {
   int poshash = hashpjw(name);
   listNode *elem = table.hash_t[poshash];
   while (elem != NULL){
      if (strcmp(elem->entry.name, name) == 0)
         return (&(elem->entry));
      elem = elem->next;
   }
   return NULL;
}

int insert(symbol_t* table, entry_t* entry) {
   int i;
   listNode *elem, *prev;

   char* s;
   s = entry->name;

   int posh = hashpjw(s);

   // Testa se tem colisão
   if (table->hash_t[posh] == NULL){
      //printf("sem colisao\n");
	table->hash_t[posh] = (listNode*)malloc( sizeof(listNode) );
	table->hash_t[posh]->entry = *entry;
	table->hash_t[posh]->next = NULL;
	table->hash_t[posh]->prev = NULL;
   }
   else {
      //printf("com colisao\n");

         elem = table->hash_t[posh];
         while (elem != NULL){
            if (strcmp(elem->entry.name, entry->name) == 0)
            {
               printf("elemento %s jah estah na tabela\n",entry->name );
               exit(-1);
            }
            prev = elem;
            elem = elem->next;
         }

         prev->next = (listNode*)malloc( sizeof(listNode) );
	 prev->next->entry = *entry;
         prev->next->next = NULL;
         prev->next->prev = prev;
   }
}


int print_table(symbol_t table) {
   int i;
   listNode *elem;
   for (i = 0; i < TABLE_SIZE; i++){
      elem = table.hash_t[i];
      printf("indice: %d\n", i);
      while (elem != NULL){
         printf("%s |", elem->entry.name);
         elem = elem->next;
      }
      printf("\n");
   }
}

int print_file_table(FILE* out, symbol_t table) {
   int i;
   listNode *elem;
   for (i = 0; i < TABLE_SIZE; i++){
      elem = table.hash_t[i];
      fprintf(out, "indice: %d\n", i);
      while (elem != NULL){
         fprintf(out, "%s |", elem->entry.name);
         elem = elem->next;
      }
      fprintf(out, "\n\n");
   }
}
