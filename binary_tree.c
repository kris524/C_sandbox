#include <stdio.h>
#include <stdlib.h>

typedef struct node {

  int val;
  struct *node left;
  struct *node right;


} node_t;



int main(){

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list.val = 0;
  test_list.left = NULL;
  test_list.right = NULL;




}
