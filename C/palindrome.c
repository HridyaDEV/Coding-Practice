#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]){

	int low=0;
	int high= strlen(str)-1;

	while(low<high){
		if(tolower(str[low])!=tolower(str[high])){
			printf("%s is not palindrome",str);
			return 0;

		}

		low++;
		high--;
	}
		printf("%s is palindrome",str);
		return 1;
}

	int main() {
		char str[100];
		printf("Enter a sentence\n");
		scanf("%99s",str);
		isPalindrome(str);
		return 0;
}

