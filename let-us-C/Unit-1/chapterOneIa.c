#include <stdio.h>

int main(){
	
	int basicSalary;
	
	printf("Please input you basic salary:   ");
	scanf("%d", &basicSalary);
	
	int grossSalary = basicSalary + basicSalary * 0.4 + basicSalary * 0.2;
	
	printf("Gross salary is equal to %d", grossSalary);
	
	return 0;
}
    	