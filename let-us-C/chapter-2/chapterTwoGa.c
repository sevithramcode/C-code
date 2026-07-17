#include <stdio.h>

int main(){
	
	int year;
	int zero = 0;
	
	printf("Please enter a year and we will determine if its a leap year or not:   ");
	scanf(" %d", &year);
	
	if (zero == year % 4 ) {
	printf( "\n %d is a leap year", year);
	}else { 
	printf( "\n %d is not a leap year", year);}
	  
 return 0;
	  
	}