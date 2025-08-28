#include <stdio.h>
 int main (){
    int nextTerm, a=0, b=1, n;

    printf("Enter the n");
    scanf("%d", &n);
    printf("%d, %d, ", a, b);

    for(int i=2; i<n; i++){
        nextTerm = a+b;
        a=b;
        b=nextTerm;

        printf("%d, " , nextTerm);
    }
    return 0;
 }