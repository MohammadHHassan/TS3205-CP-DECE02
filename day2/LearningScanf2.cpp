// day2
// LearningScanf2

#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("Please enter the value of a: ");
	scanf(" %d", &a);
	
	printf("Please enter the value of b: ");
	scanf(" %d", &b);
	
	c = a+b;
	printf("\nc = a+b = %d", c);
	
	return 0;
}
