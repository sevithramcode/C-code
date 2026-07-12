#include <stdio.h>

int main(){
	
	int number;
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	int reversed;
	
	printf("Please input the 5 digit number:   ");
	scanf("%d", &number);
	
	first = number % 10;
	number = number/10;
	
	second = number % 10;       
    number = number / 10;      

    third = number % 10;       
    number = number / 10;  

    fourth = number % 10;      
    number = number / 10;  
	
	fifth = number % 10;     
	
	reversed = (first * 10000) + (second * 1000) + (third * 100) + (fourth * 10) + (fifth * 1);
	printf("\nThe numbers reversed are %d", reversed);
	
	return 0;
}
	