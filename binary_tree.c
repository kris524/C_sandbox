#include <stdio.h>
#include <stdlib.h>

typedef struct node {

  int val;
  struct node *left;
  struct node *right;

} node_t;

void insert_node(node_t *tree, int value) {
  if (tree->val == 0) {
    tree->val = value;

  } else {
    __insert_node_recursive(*tree, value);
  }
}

void __insert_node_recursive(node_t *tree, int value) {

  if (tree->val > value) {
 
    if (tree->left != NULL) {
       __insert_node_recursive(tree->left, value);

         } else {


      node_t *sub_tree = (node_t *)malloc(sizeof(node_t));
      sub_tree->left = NULL;
      sub_tree->right = NULL;
      sub_tree->val = value;
      tree->left = sub_tree;

         }
  }

  elif (tree->val < value) {
    if (tree->right->val == 0) {
      tree->right->val = value;
    } else {
      __insert_node_recursive(tree->right, value);
    }
  }
}

int main() {

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list.val = 0;
  test_list.left = NULL;
  test_list.right = NULL;
}
