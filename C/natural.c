#include <stdio.h>
int main(){
	int n;
	int sum=0;
	int i=1;
	printf("Enter the natural number\n");
	scanf("%i",&n);
	 while(i<=n){
		sum=sum+i;
		i++;
		}
	printf("sum = %i",sum);
return 0;
}
