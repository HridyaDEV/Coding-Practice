#include <stdio.h>
int main()
{
	int age;
	printf("Enter your Age");
	scanf("%i",&age);
  if(age<18)
	{
	printf("you need to be above 18 to continue...!");
	}
  else
	{
	printf("You can continue...!");
	}
}
