#include <stdio.h>

int main(){
	
	float farTemp;
	
	printf("Please input the temperature of a city in fahrenheit:   ");
	scanf("%f", &farTemp);
	
	float celTemp = (farTemp - 32) * 5/9;
	
	printf("\nThe centigrade value is %f", celTemp);
	
	return 0;
}