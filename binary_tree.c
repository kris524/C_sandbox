#include <stdio.h>
#include <stdlib.h>

typedef struct node {

  int val;
  struct node *left;
  struct node *right;

} node_t;


void insert_node_recursive(node_t *tree, int value) {

  if (tree->val > value) {

    if (tree->left != NULL) {
      insert_node_recursive(tree->left, value);

    } else {

      node_t *sub_tree = (node_t *)malloc(sizeof(node_t));
      sub_tree->left = NULL;
      sub_tree->right = NULL;
      sub_tree->val = value;
      tree->left = sub_tree;
    }
  }

  else if (tree->val <= value) {
      
    if (tree->right != NULL){
      insert_node_recursive(tree->right, value);
    }
    else {
      node_t *sub_tree = (node_t *)malloc(sizeof(node_t));
      sub_tree->left = NULL;
      sub_tree->right = NULL;
      sub_tree->val = value;
      tree->right = sub_tree;

    }

  }
}



void insert_node(node_t *tree, int value) {
  if (tree->val == 0) {
    tree->val = value;

  } else {
    insert_node_recursive(tree, value);
  }
}


void show_tree(node_t* tree){

}



int main() {

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 9;
  test_list->left = NULL;
  test_list->right = NULL;

  insert_node(test_list,5);
  insert_node(test_list,8);
  insert_node(test_list,4);
  insert_node(test_list,3);

  free(test_list);



}
