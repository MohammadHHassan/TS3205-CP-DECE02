// day4
// Example1

#include <stdio.h>

int main(void)
{
	int a=10, b=15, c, answer;
	c = a+b;
	
	printf("Given a = %d, b = %d\n", a, b);		// Display the values of a & b
	
	do									// Do the following program
	{
		printf("What is a+b? ");		// Ask the user what is the answer
		scanf(" %d", &answer);			// Store the user's input in variable answer
		
		if(c!=answer)		// If c is not equal to answer
		{
			printf("Wrong answer. Please try again.\n");
		}
	}while(c!=answer);		// Loop while the answer is incorrect
	
	printf("Your answer is correct! Thank you");
	
	return 0;
}
