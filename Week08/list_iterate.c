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

// ======================== tut exercise here! =========================
// iterate through the given list
void iterate_list(struct node *head) {
    
    struct node *current = head;
    while (current != NULL) {
        current = current->next;
    }

}

// how can you change this code to return the last node instead?
// have you considered all the cases?
struct node *get_last_node(struct node *head) {
    
    if (head == NULL) {
        return;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    return current;
}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(int));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}