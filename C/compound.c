#include <stdio.h>
#include <math.h>
int main(){
	double p,r,t;
	double amount;
	double ci;
	printf("Enter the principal amount p:\n");
	scanf("%lf",&p);
	printf("Enter the rate of interest r:\n");
	scanf("%lf",&r);
	printf("Enter the time period t:\n");
	scanf("%lf",&t);
	amount= p*pow((1+r/100),t);
	ci= amount-p;
	printf(" compount interest :%f");
}
