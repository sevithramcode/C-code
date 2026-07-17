


#include <stdio.h>

int main(){
	
	char inputC;
	
	printf("Please input a capital letter or small letter or digit or a special symbol:   ");

	scanf("%c", &inputC);
	
	if ( inputC >= 'A' && inputC <= 'Z' ) {
		printf("\nYou inputed a capital letter"); }
		else if ( inputC >= 'a' && inputC <= 'b' ) {
			printf("\nYou inputed a lowercase letter"); }
			else if  ( inputC >= '0' && inputC <= '9' )  {
	            printf("\nYou inputed a digit letter"); }
				    else {
					printf("\nYou inputed a special character"); }
				
	return 0;
}
			