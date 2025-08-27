#include <stdio.h>
int main(){
	int len,width;
	float area,peri;
	printf("Enter the lenth of rectangle:\n");
	scanf("%i",&len);
	printf("Enter the width of rectangle:\n");
	scanf("%i",&width);
	area=len*width;
	printf("Area=%f\n",area);
	peri=2*(len+width);
	printf("Perimeter=%f\n",peri);
return 0;
}
