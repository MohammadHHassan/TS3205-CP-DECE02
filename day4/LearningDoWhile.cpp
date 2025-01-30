// day4
// LearningDoWhile

#include <stdio.h>				// Library for input (scanf) & output (printf)

int main(void)					// Main function
{
	double x;					// Declare variable x as double
	
	do							// Do the following program
	{
		printf("Please enter a negative number: ");
		scanf(" %lf", &x);		// Store the user's input in x
	}while(x>=0);				// Loop while user entered positive number
	
	printf("\nYour number is %g", x);
	printf("\nThank you!");
	
	return 0;					// End of main function
}
