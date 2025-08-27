#include <stdio.h>
int main(){
	int num,range,mult,i;
	printf("Enter a number to prit multiplication table\n");
	scanf("%i",&num);
	printf("Enter the range\n");
	scanf("%i",&range);
for(int i=1;i<=range;i++){
	mult=num*i;
	
	printf("%d*%d=%d\n",num,i,mult);
}
return 0;
}
