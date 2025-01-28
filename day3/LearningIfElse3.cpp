// day3
// LearningIfElse3

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf(" %d", &age);
	
	if(age>=18)				// If the age is 18 and above
	{
		printf("You are eligible for a driver's license.");
	}
	else
	{
		printf("You are NOT eligible for a driver's license.");
	}
	
	printf("\nThank you!");
	
	return 0;
}
