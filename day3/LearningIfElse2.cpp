// day3
// LearningIfElse2

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;
	
	printf("Please enter a positive number: ");
	scanf(" %lf", &x);
	
	if(x>0)
	{
		y = sqrt(x);
		printf("Square root of %g is equal to %.2f\n", x, y);
	}
	else
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...\n");
		x = -x;
		y = sqrt(x);
		printf("Square root of %g is equal to %.2f\n", x, y);
	}
	
	printf("Thank you");
	
	return 0;
}
