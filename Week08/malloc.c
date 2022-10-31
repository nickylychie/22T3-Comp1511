// Nicole, 22T3 Week 8
// Tutorial demo code for creating a linked list

#include <stdio.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5, 6};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return 0;
}

// ======================== tut exercise here! ========================
struct node *create_new_node(int value) {

    // create a new node and return a pointer to it
    
    // needs to be changed
    return NULL;
}