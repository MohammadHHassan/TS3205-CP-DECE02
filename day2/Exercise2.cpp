// day2
// Exercise2

/*	Declare variables area, base and height in double
	Print out a message "Area of triangle calculator"
	
	Prompt a message for the user to enter value of base
	Store this value in base variable
	Prompt another message for the user to enter the value of height
	Store this value in height variable
	
	Calculate the area of triangle and store the value in area variable
	Print out the result in user-friendly manner
*/

#include <stdio.h>

int main(void)
{
	double area, base, height;
	printf("Area of triangle calculator\n\n");
	
	printf("Please enter the value of base: ");
	scanf(" %lf", &base);
	printf("Please enter the value of height: ");
	scanf(" %lf", &height);
	
	area = 1.0/2.0*base*height;
	printf("\nArea of triangle = %.2f", area);
	
	return 0;
}
