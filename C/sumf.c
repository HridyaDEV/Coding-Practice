#include <stdio.h>
int sumFunction(int ,int );
int main(){
	int a,b,sum;
	printf("Enter the value of a:\n");
	scanf("%i",&a);
	printf("Enter the value of b:\n");
	scanf("%i",&b);
sum=sumFunction( a, b);
	printf("Sum =%i",sum);
}
int sumFunction(int a,int b){
return a+b;
}
