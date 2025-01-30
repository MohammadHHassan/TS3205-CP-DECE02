// day4
// LearningSwitch

#include <stdio.h>

int main(void)
{
	char input;
	
	printf("Please enter 'A' or 'B': ");
	scanf(" %c", &input);
	
	switch(input)
	{
		case 'A':	printf("You typed 'A'");
					break;			// Exit from curly bracket
					
		case 'a':	printf("You typed 'a'");
					break;
		
		case 'B':	
		case 'b':	printf("You typed 'B' or 'b'");
					break;
					
		default:	printf("You didn't type 'A' or 'B'");	// If user does not enter A, a, B or b
	}
	
	printf("\nThank you!");
	
	return 0;
}
