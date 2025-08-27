
#include <stdio.h>

// Function to generate and print Fibonacci sequence up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);  // Print the first term
        } else if (i == 1) {
            printf(", %d", b);  // Print the second term
        } else {
            next = a + b;  // Calculate the next term
            a = b;  // Update a to be the previous term b
            b = next;  // Update b to be the new term
            printf(", %d", next);  // Print the new term
        }
    }
    printf("\n");  // Print a newline character at the end
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);  // Read the number of terms from user input
    fibonacci(terms);  // Call the fibonacci function with the input number of terms

    return 0;
}
