#include <stdio.h>

int main() {
    int row;

    printf("Enter no of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        for (int col = 1; col <= i; col++) {
            printf("* ");
        }
        printf("\n");  // move to next line after each row
    }

    return 0;
}


