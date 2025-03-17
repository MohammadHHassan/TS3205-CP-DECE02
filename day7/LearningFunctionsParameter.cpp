// day7
// LearningFunctionsParameter

#include <stdio.h>

double moneyConverter(double money);	// Declaration of moneyConverter
								// Contains one parameter (double money)

int main(void)
{
	double duit, input;
	
	printf("Welcome to money converter.\n");
	printf("Today's rate:\n");
	printf("BND 1.00 = RM 3.24\n\n");
	
	printf("Please enter your money: BND ");
	scanf(" %lf", &input);
	
	duit = moneyConverter(input);		// Calling the function
	
	printf("\nYour BND %.2f has been converted to RM %.2f\n", input, duit);
	
	printf("\nBND 200.00 = RM %.2f", moneyConverter(200));
	printf("\nBND 300.00 = RM %.2f", moneyConverter(300));
	printf("\nBND 400.00 = RM %.2f", moneyConverter(400));
	
	return 0;
}

double moneyConverter(double money)
{
	return money*3.24;	// Return the converted money back to the caller
}
