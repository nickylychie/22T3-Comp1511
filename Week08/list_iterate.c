// Nicole, 22T3 Week 8
// Tutorial demo code for iterating through a linked list

#include <stdio.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
void iterate_list(struct node *head);

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5, 6};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    iterate_list(head);

    return 0;
}

// ========================= tut exercise here! ==========================
void iterate_list(struct node *head) {
    
    // TODO
    // iterate through a given list

}
// how can you change this code to return the last node instead?
// have you considered all the cases?

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(int));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}