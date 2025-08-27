#include <stdio.h>
int main(){
	int a,b,temp;
	printf("Enter the value of a :");
	scanf("%i",&a);
	printf("Enter the value of b :");
	scanf("%i",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Value of a=%i",a);
	printf("Value of b=%i",b);
return(0);
}
