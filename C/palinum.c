#include <stdio.h>
int main(){
	int ori,rev=0,oriNum,reminder;
	printf("Enter the number:");
	scanf("%d",&ori);
	oriNum=ori;
while(ori!=0){
	reminder=ori%10;
	rev=rev*10+reminder;
	ori=ori/10;
	}
if(oriNum==rev){
	printf("The number is palindrome");
	}
else{
printf("The number is not palindrome");
	}
return 0;
}
