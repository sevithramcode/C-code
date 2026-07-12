#include <stdio.h>

int main(){
	
	int distance;
	
	
	printf("Please input the distance between two cities in kilometers:   ");
	scanf("%d", &distance);
	
	int meter = distance * 1000;
	int feet = distance * 3281;
	int inches = distance * 39370;
	int cm = distance * 100000;
	
	printf("\n%d km to is equal to %d meter", distance, meter);
	printf("\n%d km to is equal to %d feet", distance, feet);
	printf("\n%d km to is equal to %d inches", distance, inches);
	printf("\n%d km to is equal to %d cm", distance, cm);
	
	return 0;
}
	