#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node_t;


// int add_node(node_t node, int data){
//     node_t new_node;
//     new_node.val = data;
//     new_node.next = NULL;

// }

void add_node(node_t *head, node_t * next_node){
    node_t * curr_pointer = head;
    while (curr_pointer->next != NULL)
    {
        curr_pointer = curr_pointer->next;
    }

    curr_pointer->next = next_node;

}


int pop_head(node_t **head){
    int temp = (*head)->val;
    *head = (*head)->next;
    return temp;

}

void remove_last_node(node_t * head){

    if(head->next == NULL){
        free(head);
        return;
    }

    node_t * curr_pointer = head;
    while (curr_pointer->next->next!=NULL){
        curr_pointer = curr_pointer->next;
    }
    curr_pointer->next = NULL;

}


void remove_specific_item(node_t **head, int val){

    node_t * curr_node = *head;

    while (curr_node->next->val != val){
        curr_node = curr_node->next;
    }

    node_t * next_node = curr_node->next->next;
    curr_node->next = next_node;

}


void add_at_start(node_t **head, node_t * start_node){

    start_node->next = *head;
    *head = start_node;
}


void print_LL_values(node_t * head) {
    node_t * curr_pointer = (node_t *)malloc(sizeof(node_t));
    curr_pointer = head;
    while(curr_pointer != NULL){      
        printf("Value: %d\n", curr_pointer->val);
        curr_pointer = curr_pointer->next;
    }
}

int main(){
    node_t * head = NULL;
    head = (node_t *)malloc(sizeof(node_t));

    if(head==NULL){
        return 1;
    }

    head ->val = 10;
    head ->next = NULL;

    // node_t new_node;
    // new_node.val = 11;
    // new_node.next = NULL;

    // node_t * next_node = NULL;
    head->next = (node_t *)malloc(sizeof(node_t));
    head->next->val=4;
    head->next->next =NULL;

    // node_t * next_node = NULL;
    head->next->next = (node_t *)malloc(sizeof(node_t));
    head->next->next->val=6;
    head->next->next->next =NULL;



    print_LL_values(head);


    node_t * next_node = (node_t *)malloc(sizeof(node_t));;
    next_node->val = 11;
    next_node->next=NULL;

    add_node(head, next_node);

    print_LL_values(head);

    node_t * start_node = (node_t *)malloc(sizeof(node_t));
    start_node->val = 9;
    start_node->next=NULL;
    printf("Add at start\n");
    add_at_start(&head, start_node);
    print_LL_values(head);


    printf("POP Head\n");
    printf("Popped value from top %d\n",pop_head(&head));
    print_LL_values(head);


    // printf("DELETE LAST\n");
    // node_t * new_head = (node_t *)malloc(sizeof(node_t));;
    // new_head->val = 11;
    // new_head->next=NULL;

    // print_LL_values(new_head);
    // remove_last_node(new_head);
    // print_LL_values(new_head);

    printf("Delete by value\n");
    remove_specific_item(&head, 6);
    print_LL_values(head);

    


}
