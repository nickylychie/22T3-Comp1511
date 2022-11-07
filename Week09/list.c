// Program to do various linked list exercises
// Written by <your-name> (zID) on <date>

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {

    struct node *list_1 = create_list_1();
    printf("\nList 1:\n");
    print_list(list_1);

    struct node *list_2 = create_list_2();
    printf("\nList 2:\n");
    print_list(list_2);

    printf("\nCopied list 1:\n");
    struct node *copied_list = copy(list_1);
    print_list(copied_list);

    printf("\nAppended list 1 & 2:\n");
    struct node *appended_list = list_append(list_1, list_2);
    print_list(appended_list);

    printf("\n");

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {

    // TODO
    // Create a new copy of the given list
    // and return a the head of this new list

    return NULL;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    
    // TODO
    // Append (join) the second list to the end of 
    // the first list
    
    return NULL;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(struct node *first_list, struct node *second_list) {
    return NULL;
}

struct node *create_list_1(void) {
    int array[SIZE] = {1, 2, 3, 4, 5, 6};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}

struct node *create_list_2(void) {
    int array[SIZE] = {7, 8, 9, 10, 11, 12};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(int));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}