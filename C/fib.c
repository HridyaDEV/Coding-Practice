#include <stdio.h>
int main(){
	int n,t1=0,t2=1,nextterm;
	printf("Enter the number of terms:");
	scanf("%d",&n);
for(int i=1;i<=n;i++){
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;
	printf("%d, ",nextterm);
	}
return 0;
}
