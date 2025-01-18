// day2
// LearningScanf		- scanf allows you to accept user's input

#include <stdio.h>		// Header file for input (scanf) and output (printf)

int main(void)			// Main function
{
	int age;			// Declare variable age to store user's age
	
	printf("Hi Mohammad :)\n");
	
	printf("How old are you?\n");	// Prompt the message for user to enter their age
	scanf(" %d", &age);				// Store the user's input in variable age
	
	printf("You are %d years old", age);	// Print back the user's age
	
	return 0;			// End of main function
}
