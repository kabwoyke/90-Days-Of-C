#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;


struct Node* create_node(int data){
    struct Node* node = malloc(sizeof(Node));
    if(!node){
        printf("Memory allocation failed!!!\n");
        return NULL;
    }
    node->data = data;
    node->next = NULL;
    return node;

}

int main(){

    struct Node* head = create_node(1);
    struct Node* second = create_node(2);
    struct Node* third = create_node(4);

    head->next = second;
    second->next = third;
    third->next = NULL;

    struct Node* current = head;

    while(current != NULL){
        struct Node* temp = current;
        printf("data is %d\n" , current->data);
        current = current->next;
        free(temp);

    }

    return 0;
}