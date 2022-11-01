// Nicole, 22T3 Week 8
// Tutorial demo code for inserting a node into a linked list

#include <stdio.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
struct node *insert_3rd(int value, struct node *head);

int main(void) {

    int array[SIZE] = {10, 20, 30, 40, 50, 60};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    head = insert_3rd(-2758, head);


    return 0;
}

// ======================== tut exercise here! =========================
struct node *insert_3rd(int value, struct node *head) {
    struct node *new_node = create_new_node(value);
    
    if (head == NULL) {
        return new_node;
    }
    
    int position = 1;
    struct node *current = head;
    while (current->next != NULL && position < 2) {
        current = current->next;
        position += 1;
    }
    new_node->next = current->next;
    current->next = new_node;
    
    return head;
}

struct node *create_new_node(int value) {
