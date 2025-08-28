#include <stdio.h>

int main()
{
    int number, store, rev = 0;
    int left;

    printf("Enter the number");
    scanf("%d", &number);

   store = number;

    while (number > 0)
    {
        left = number % 10;
        rev = rev * 10 + left;
        number = number / 10;
    }

    printf("The given number %d", store);
    printf("Reversed number: %d",rev);

    return 0;
}