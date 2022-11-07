// Nicole, 22T3 Week 9
// Tutorial demo code for freeing a linked list

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
void free_list(struct node **head);
struct node *create_list(void);
void print_list(struct node *head);

int main(void) {

    struct node *list = create_list();
    printf("\nList:\n");
    print_list(list);

    free_list(&list);
    printf("\nList after freeing:\n");
    print_list(list);

    printf("\n");

    return 0;
}

// ======================== tut exercise here! =========================
// free the given list
void free_list(struct node **head) {
    
    // TODO 

}

struct node *create_new_node(int value) {

    struct node *new_node = malloc(sizeof(int));
    new_node->data = value;
    new_node->next = NULL;

    return new_node;
}

struct node *create_list(void) {
    int array[SIZE] = {7, 8, 9, 10, 11, 12};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

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