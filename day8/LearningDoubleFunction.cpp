// day8
// LearningDoubleFunction

#include <stdio.h>
#include <math.h>

double hypo(double a, double b)
{
	return sqrt(pow(a,2)+pow(b,2));
}

int main(void)
{
	double base, height, hp;
	
	printf("This program calculates the hypotenuse of a triangle.\n\n");
	
	printf("Please enter the base value: ");
	scanf(" %lf", &base);
	printf("Please enter the height value: ");
	scanf(" %lf", &height);
	
	hp = hypo(base,height);
	printf("\nHypotenuse = %.2f", hp);
	
	return 0;
}
