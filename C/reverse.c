#include <stdio.h>
int main(){
	int ori,rev,reminder;
	printf("Enter the number:");
	scanf("%d",&ori);
    while( ori != 0){
	reminder = ori%10;
	rev =rev*10+reminder;
	ori =ori/10;
	}
printf("The reversed number : %d",rev);
return 0;
}
