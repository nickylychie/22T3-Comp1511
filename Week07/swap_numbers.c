// Nicole, 22T3 Week 7
// Tutorial demo: Struct pointers

#include <stdio.h>

struct person {
    int num;
    char letter;
};

void swap_numbers(struct person *member1, struct person *member2);

int main(void) {

    // Create 2 people
    struct person person1;
    person1.num = 1;
    person1.letter = 'y';
    struct person person2;
    person2.num = 2;

    printf("Address of person1 num: %p\n", &person1.num);
    printf("Address of person1 letter: %p\n\n", &person1.letter);

    // Print numbers
    printf("Person1 Number: %d\n", person1.num);
    printf("Person2 Number: %d\n", person2.num);

    // Swap Numbers
    printf("===== swap =====\n");
    swap_numbers(&person1, &person2);
    
    // Print numbers again
    printf("Person1 Number: %d\n", person1.num);
    printf("Person2 Number: %d\n", person2.num);

    return 0;
}

// Swaps the numbers of each struct
void swap_numbers(struct person *member1, struct person *member2) {
    int temp_num = member1->num;

    member1->num = member2->num;
    member2->num = temp_num;
}