// day8
// LearningStrings
// Strings = A collection of characters

#include <stdio.h>

int main(void)
{
	char name[100];
	
	printf("Please enter your full name: ");
	scanf(" %[^\n]s", &name);	// %s for string, [^\n] stop reading when user press enter
	
	printf("Your name is %s", name);
	
	return 0;
}
