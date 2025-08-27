#include <stdio.h>
int main(){
	float tf,tc;
	printf("Enter the temperature in F\n");
	scanf("%f",&tf);
 
	tc=(tf-32)*5/9;
	printf("Temperature in celsius = %f",tc);
return(0);
	}
	
