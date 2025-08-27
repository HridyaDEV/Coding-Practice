#include <stdio.h>
void myFunction(char name[]){
	
	printf("Hello %s ",name);
}
int main(){
char name[100];
printf("Enter your name:\n");
scanf("%s",&name);
	myFunction(name);
}
