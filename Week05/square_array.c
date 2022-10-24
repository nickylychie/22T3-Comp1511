// Nicole, Week 5 22T3
// Tutorial demo code for arrays

#include <stdio.h>

#define MAX_SIZE 100

int square(int x);
void print_array(int length, int array[length]);
/*
Finish this prototype:
square_array()
    - takes in an array of size length
    - squares all the elements inside the array
*/
void square_array(int length, int inputs[MAX_SIZE]);

int main(void) {

    int inputs[MAX_SIZE];

    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);
    for (int i = 0; i < size; i++) {
        int input;
        scanf("%d", &input);
        inputs[i] = input;
    }

    printf("Values before square_array: ");
    print_array(size, inputs);

    // add arguments
    square_array(size, inputs);

    printf("Values after square_array:  ");
    print_array(size, inputs);

    return 0;
}

// Returns the square of a given integer.
int square(int x) {
    return x * x;
}

// Squares all elements of an array, modifying the array in the process.
void square_array(int length, int inputs[MAX_SIZE]) {

    int i = 0;
    while (i < length) {
        inputs[i] = square(inputs[i]);
        i++;
    }

}













//prints out an array all pretty like
void print_array(int length, int array[length]) {
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%3d", array[i]);
        if (i != length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}