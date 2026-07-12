#include <stdio.h>

int main(){
	
	int math;
	int science;
	int english;
	int socialStudies;
	int hindi;
	
	printf("Please unput the grade for each class with a space in between:   ");
	scanf("%d %d %d %d %d", &math, &science, &english, &socialStudies, &hindi);
	
	int aggregateMarks = math + science + english + socialStudies + hindi;
	float totalPercentage = aggregateMarks/5.0;
	printf("\nThe total aggregat mark are %d", aggregateMarks);
	printf("\nThe average percentage is %f" , totalPercentage);

return 0;
}	