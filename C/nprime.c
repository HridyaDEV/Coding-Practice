#include <stdio.h>
#include <stdbool.h>

                
bool isPrime(int a){
        if(a==1||a==0)
        return false;
        
        
                for(int i=2;i<= a/2;i++){
                        if(a % i == 0)
                                return false;
                                }
                      
                     return true;
                            }
                                
                
        

int main(){
	int a,N;
	printf("Enter a Integer :");
	scanf("%d",&N);
	
	for(int i=1;i<= N;i++){
		if (isPrime(i)){

		printf("%d",i);
		}
	}
return 0;
}
