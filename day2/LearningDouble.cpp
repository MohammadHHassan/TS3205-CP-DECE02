// day2
// LearningDouble

#include <stdio.h>				// Library for printf

int main(void)					// Main function
{
	double numberOne, numberTwo, numberThree;		// Declare three variables as double
	
	numberOne = 3.19;
	numberTwo = 2.5;
	numberThree = numberOne+numberTwo;
	
	printf("numberOne = %.2f, numberTwo = %.2f", numberOne, numberTwo);
	printf("\nnumberThree = numberOne+numberTwo = %.2f", numberThree);
	
	return 0;					// End of main function
}
