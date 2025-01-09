// day1
// LearningVariable

#include <stdio.h>

int main(void)
{
	// Variable is a place where you store data
	// Types of variable: int, float/double, char, boolean
	
	int a, b, c;		// Declaring variables a, b and c as integers (whole numbers)
	
	a = 20;
	b = 15;
	c = a+b;
	
	printf("a = %d, b = %d", a, b);		// Prints out the value of a and b
	printf("\nc = %d+%d = %d", a, b, c);
	
	return 0;
}
