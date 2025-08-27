#include <stdio.h>
void add();
void sub();
void multi();
void div();

int main(){
	int choice;
	while(1){
		printf("Simple calculator\n");
		printf("1.Add\n");
		printf("2.Substract\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("5.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		
	switch (choice){
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			multi();
			break;
		case 4:
			div();
			break;
		case 5:
			printf("Exiting....\n");
			return 0;
			}
		}

	return 0;
	}

void add() {
double num1,num2,result;
printf("Enter the first number\n");
scanf("%lf",&num1);
printf("Enter the second number\n");
scanf("%lf",&num2);
result = num1+num2;
printf("%lf + %lf = %.2lf\n",num1,num2,result);
}

void sub(){
double num1,num2,result;
printf("Enter the first number\n");
scanf("%lf",&num1);
printf("Enter the second number\n");
scanf("%lf",&num2);
result = num1-num2;
printf("%lf - %lf = %.2lf\n",num1,num2,result);
}

void multi(){
double num1,num2,result;
printf("Enter the first number\n");
scanf("%lf",&num1);
printf("Enter the second number\n");
scanf("%lf",&num2);
result=num1*num2;
printf("%lf * %lf = %.2lf\n",num1,num2,result);

}

void div(){
double num1,num2,result;
printf("Enter the first number\n");
scanf("%lf",&num1);
printf("Enter the second number\n");
scanf("%lf",&num2);
result= num1 / num2;
printf("%lf / %lf = %.2lf\n",num1,num2,result);

}


