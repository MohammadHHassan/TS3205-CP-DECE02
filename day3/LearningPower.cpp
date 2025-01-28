// day3
// LearningPower

#include <stdio.h>			// Library for printf and scanf
#include <math.h>			// Library for mathematical functions

int main(void)
{
	double a, b, c;
	
	a = 3.0;
	b = 3.0;
	
	c = pow(a, b);
	
	printf("3 to the power of 3 = %g", c);
	
	printf("\n2 to the power of 4 = %g", pow(2,4));
	
	return 0;
}
