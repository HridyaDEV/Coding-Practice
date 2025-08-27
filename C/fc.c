#include <stdio.h>
float toCelsius(float farenhiet){
	return (farenhiet-32)*5/9;
		}
int main(){
	float farenhiet,celsius;
	printf("Enter temp in Farenhiet :\n");
	scanf("%f",&farenhiet);
	celsius=toCelsius(farenhiet);
	printf("Temperaturein celsius = %f",celsius);
}

