#include <stdio.h>

int main(){
	
	float length;
	float breadth;
	
	printf("Please input the length and breadth with a space:   ");
	scanf("%f %f", &length, &breadth);
	
	float perimeter = (length * 2) + (breadth * 2);
	float area = (length * breadth);
	
	printf("\nThe perimeter is %f and the area is %f", perimeter, area);
	
	return 0;
}