#include <stdio.h>

int main(){
	
	double hardness;
	double carbonCon;
	double tensileStr;
	
	printf("Please input the hardness of the steel:   ");
	scanf("%lf", &hardness);
	
	printf("Please input the carbon content of the steel:   ");
	scanf("%lf", &carbonCon);
	
    printf("Please input the tensile strength of the steel:   ");
	scanf("%lf", &tensileStr);
	
	if ( hardness > 50.0 && carbonCon < 0.7 && tensileStr > 5600.0 ){
	    printf("The grade of the steel is 10");
	} else if( hardness > 50.0 && carbonCon < 0.7 && tensileStr <= 5600.0 ){
			printf("The grade of the steel is 9");
	} else if( hardness <= 50.0 && carbonCon < 0.7 && tensileStr > 5600.0 ){
				printf("The grade of the steel is 8");
    } else if( hardness > 50.0 && carbonCon >= 0.7 && tensileStr > 5600.0 ){
					printf("The grade of the steel is 7");
	} else if ( (hardness > 50.0 && carbonCon > 0.7 && tensileStr > 5600) || 
				(hardness < 50.0 && carbonCon < 0.7 && tensileStr > 5600) || 
				(hardness < 50.0 && carbonCon > 0.7 && tensileStr < 5600)){	
					printf("The grade of the steel is 6");
	} else {
						printf("The grade of the steel is 5");
	}
					
	return 0;
}
					
					    