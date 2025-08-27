#include <stdio.h>

int main() {
    int x = 10; // Declare and initialize an integer variable
    int *ptr;   // Declare a pointer to an integer

    ptr = &x;   // Assign the address of x to ptr

    // Print the value of x using pointer dereferencing
    printf("The value of x is: %d\n", *ptr);

    // Modify the value of x through the pointer
    *ptr = 20;

    // Print the new value of x
    printf("The new value of x is: %d\n", x);

    return 0;
}
