#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* este teste deve retornar um erro. */
int main(int argc, char** argv) {
  Node* root;
  Node** children;
  Node * f1, *f2;

  f1 = create_leaf(1, int_node, "1", NULL);
  f2 = create_leaf(1, int_node, "2", NULL);
  pack_nodes(&children, 0, f1); 
  pack_nodes(&children, 1, f2);
  pack_nodes(&children, 2, f2);
  pack_nodes(&children, 3, f2);
  pack_nodes(&children, 4, f2);
  pack_nodes(&children, 5, f2);
  pack_nodes(&children, 6, f2);
  pack_nodes(&children, 7, f2);
  pack_nodes(&children, 8, f2);
  pack_nodes(&children, 9, f2);
  pack_nodes(&children, 10, f2);
  root =  create_node(1, plus_node, "", NULL, 11, children);
  printf(" OKAY.\n");
  return(0);
}
