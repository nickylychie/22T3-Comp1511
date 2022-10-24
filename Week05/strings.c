// Nicole, Week 5 22T3
// Tutorial demo code for strings revision

#include <stdio.h>

void print_string(char *string);

int main (void) {
    char my_string[] =  "Many chars";

    print_string(&my_string);
    return 0;
}

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}