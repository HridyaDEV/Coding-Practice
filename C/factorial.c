#include <stdio.h>
int main(){
	int num;
	int factorial=1;
	printf("Enter a number\n");
	scanf("%i",&num);
		for(int i=1;i<=num;i++){
			factorial=factorial*i;
					}
			printf("Factorial is %i",factorial);
				
return 0;
}
