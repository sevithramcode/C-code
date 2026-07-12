#include <stdio.h>

int main(){
	
	int first;
	int second;
	int third;
	
	printf("Please input two values:   ");
	scanf("%d %d", &first, &second);
	
	printf("\nC is equal to %d and D is equal to %d", first, second);
	printf("\nNow the two values will be interchanges");
	
	third = first;
	first = second;
	second = third;
	
	printf("\nNow C is equal to %d and D is equal to %d", first, second);
	
	return 0;
	
}