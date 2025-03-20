// day8
// LearningVariables

#include <stdio.h>

void test(int y);	// Declaring function test with one parameter (int y)

int main(void)
{
	int x=5;		// Local variable
	printf("1. x = %d\n", x);
	test(x);
	printf("4. x = %d", x);
	
	return 0;
}

void test(int y)	// One parameter variable y (temporary)
{
	printf("2. y = %d\n", y);
	y = 99;
	printf("3. y = %d\n", y);
}
