// Nicole, Week 5 22T3
// Tutorial demo code for functions

#include <stdio.h>

void square(int *x);

int main(void) {

    int input;
    printf("Enter a value: ");
    scanf("%d", &input);

    printf("value you have entered: %d\n", input);

    //call square, copying the value of input into `int x`
    square(&input);

    printf("value after squaring: %d\n", input);

    return 0;
}

void square(int *x) {
    *x = *x * *x;
    // printf("value inside square function: %d\n", x);
}