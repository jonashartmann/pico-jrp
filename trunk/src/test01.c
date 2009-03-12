#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* este teste deve retornar 'OKAY.' na tela. */
int main(int argc, char** argv) {
  Node* root;
  Node **c1, **c2, **c3;
  Node * f1, *f2, *f3, *f4;
  Node * n1, *n2;

  f1 = create_leaf(1, int_node, "1", NULL);
  f2 = create_leaf(1, int_node, "2", NULL);
  f3 = create_leaf(1, int_node, "3", NULL);
  f4 = create_leaf(1, int_node, "4", NULL);

  pack_nodes(&c1, 0, f1); 
  pack_nodes(&c1, 1, f2);
  n1 = create_node(1, int_node, "", NULL, 2, c1);

  pack_nodes(&c2, 0, f3);
  n2 = create_node(1, int_node, "", NULL, 1, c2);

  pack_nodes(&c3, 0, f4); 
/*  pack_nodes(&c3, 1, n2);
  pack_nodes(&c3, 2, f4);
 /* root =  create_node(1, plus_node, "", NULL, 3, c3);

  printf( "numero de filhos: %d\n", nb_of_children(root) );
printf( "numero de filhos: %d\n", nb_of_children(n1) );
printf( "numero de filhos: %d\n", nb_of_children(n2) );
  printf( "numero de filhos: %d\n", nb_of_children(f1) );
  printf( "numero de filhos: %d\n", nb_of_children(f2) );
printf( "numero de filhos: %d\n", nb_of_children(f3) );
printf( "numero de filhos: %d\n", nb_of_children(f4) );*/

  printf(" OKAY.\n");
  return(0);
}
