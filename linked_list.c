#include <stdio.h>

typedef struct node {
    int val;
    struct node *next;
} node_t;


int add_node(node_t node, int data){
    node_t new_node;
    new_node.val = data;
    new_node.next = NULL;

}

int main(){
    
}