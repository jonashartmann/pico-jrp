#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pode ser util...*/
static int __nodes_ids__ = 0;

Node* create_node(int nl, Node_type t, char* lex,
                  void* att, int nbc, Node** children) {
   int i;

   if ( nbc < 0 || nbc > MAX_CHILDREN_NUMBER )			/* ERRO: Número de filhos incorreto. */
   {
      printf("ERRO: Procedimento 'create_node': Numero de filhos incorreto(%d)\n\n", nbc);
      exit(-1);
   }

   if ( t < program_node || t > false_node )			/* ERRO: Tipo inexistente */
   {
      printf("ERRO: Procedimento 'create_node': Tipo do nodo incorreto(%d)\n\n", t);
      exit(-1);
   }


   Node *novo = (Node*) malloc( sizeof(Node) );		/* Alocação do nodo */

   novo->num_line = nl;					/* Cópia de atributos */
   novo->id = __nodes_ids__++;
   novo->type = t;

   novo->lexeme = (char*)malloc(sizeof(char)*(1+strlen(lex)));	/* cópia da string lex */
   strcpy(novo->lexeme, lex);

   novo->attribute = att;					/* CUIDADO! Cópia de ponteiro!!! Mas deve ser assim.. */

   novo->nFilhos = nbc;
   novo->filhos = (Node**)malloc( nbc * sizeof(Node*) );	/* Cópia dos filhos -> Cópia de ponteiro! ok! */
   for (i = 0; i < nbc; i++)
      novo->filhos[i] = children[i];

   return novo;
}

Node* create_leaf(int nl, Node_type t, char* lex, void* att) {

   if ( t < program_node || t > false_node )
   {
      printf("ERRO: Procedimento 'create_node': Tipo do nodo incorreto(%d)\n\n", t);
      exit(-1);
   }

   Node *novo = (Node*) malloc( sizeof(Node) );		/* Alocação do nodo */

   novo->num_line = nl;					/* Cópia de atributos */
   novo->id = __nodes_ids__++;
   novo->type = t;

   novo->lexeme = (char*)malloc(sizeof(char)*(1+strlen(lex)));	/* cópia da string lex */
   strcpy(novo->lexeme, lex);

   novo->attribute = att;					/* CUIDADO! Cópia de ponteiro!!! Verificar depois... */

   novo->nFilhos = 0;						/* Folha não tem filhos. */
   novo->filhos = NULL;

   return novo;
}

int nb_of_children(Node* n) {

   if ( n == NULL )
   {
      printf("ERRO: Procedimento 'nb_of_children': Ponteiro NULL\n\n");
      exit(-1);
   }

   return n->nFilhos;
}


Node* child(Node* n, int i) {

   if ( n == NULL )
   {
      printf("ERRO: Procedimento 'child': Ponteiro NULL\n\n");
      exit(-1);
   }

   if ( i < 0 || i >= n->nFilhos )
   {
      printf("ERRO: Procedimento 'child': Filho inexistente(%d)\n\n", i);
      exit(-1);
   }

   return n->filhos[i];
}

int deep_free_node(Node* n) {

   int i;
   for(i = 0; i < n->nFilhos; i++)		/* Desaloca primeiro a memória de todos os filhos. */
      deep_free_node(child(n, i));

   free(n->lexeme);   			/* Desaloca os atributos do nodo. */
   free(n->attribute);
   free(n->filhos);
   free(n);
   n = NULL;

   return 0;		/* Retorna sempre 0 (não tem funcionalidade) */
}

int height(Node *n) {

   if ( n->nFilhos == 0 ) return 1;	/* Se eh folha, a altura eh 1. */

   int i, max = 0;
   for (i = 0; i < n->nFilhos; i++)	/* Senão percorre os filhos, verificando o que tem a maior sub-árvore. */
   {
      int aux = height( child(n, i) );
      if (aux > max)
         max = aux;
   }
   return max+1;
}

int pack_nodes(Node*** array_of_nodes, const int cur_size, Node* n) {

   if ( cur_size == 0 )						/* Aloca memória de tamanho (cur_size+1) */
      (*array_of_nodes) = (Node**)malloc( sizeof(Node*) );
   else
      (*array_of_nodes) = (Node**)realloc((*array_of_nodes), (cur_size+1) * sizeof(Node*));

    (*array_of_nodes)[cur_size] = n;				/* Copia o elemento n para a última posição. */

   return cur_size+1;
}
