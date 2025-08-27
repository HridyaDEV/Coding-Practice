#include <stdio.h>
int main(){
	float p,t,r;
	
	printf("Enter the Principal Amount P :\n");
	scanf("%f",&p);
	printf("Rate of Interest R :\n");
	scanf("%f",&r);	
	printf("Enter the Time Period P:\n");
	scanf("%f",&t);
	float si=(p*t*r)/100;

	printf("Simple Interest is : %f\n",si);

return 0;
}
