#include <stdio.h>
int main(){
	int num;
	printf("Enter a number to check:\n");
	scanf("%i",&num);
if(num==0){
	printf("The number is zero\n");
	}
else if (num<0){
	
	printf("The number is negative\n");
	}
else if (num>0){
	printf("The number is Positive\n");
	}
return 0;
}

