#include <stdio.h>

int main(){
	
	int number;
	int first;
	int second;
	int third;
	int fourth;
	int fifth;
	int sum;
	
	printf("Enter a five-digit number:   ");
    scanf("%d", &number);

    
    first = number % 10;       
    number = number / 10;      

    second = number % 10;       
    number = number / 10;      

    third = number % 10;       
    number = number / 10;  

    fourth = number % 10;      
    number = number / 10;    

    fifth = number % 10;     

    sum = first + second + third + fourth + fifth;
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}