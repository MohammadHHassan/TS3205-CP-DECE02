// day3
// LearningIf					if = flow control

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x<0)				// If the user entered a negative number
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...\n");
		x = -x;			// New x = -(old x)
	}
	
	printf("Number entered: %d", x);
	
	return 0;
}
