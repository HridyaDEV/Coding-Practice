#include <stdio.h>

void reverse_string(char *str){
				char temp;
				
				char *end=str;
				char *start=str;
		while(*end!='\0'){
				   end++;
				}

                       end--;
		while(start<end){

				temp=*start;
				*start=*end;
				*end=temp;
				start++;
				end--;
				}
			}
int main(){
	char str[100];
	printf("Enter a string to reverse: ");
	scanf("%s",&str);
	reverse_string(str);
	printf("The reversed string is %s",str);
return 0;
}
