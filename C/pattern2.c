#include <stdio.h>

int main()
{
    int row;

    printf("Enter no of rows");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int col = 0; col < row - i; col++)
        {
            printf("*");
        }
            printf("\n");

    }
    return 0;
}
