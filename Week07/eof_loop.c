// Nicole, 22T3 Week 7
// Tutorial demo: Using EOF in loops

#include <stdio.h>

#define MAX_LETTERS 100

int main (void) {

    // currently inputs/outputs one character at a time
    char my_var;
    while (scanf(" %c", &my_var) == 1) {
        printf("Input: %c\n", my_var);
    }

    // Change it so it input/outputs one line at a time

    return 0;
}