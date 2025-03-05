// day5
// Program2

/*	Prompt a message for the user to enter a value 3 times
	Store the user's input in x (double)
	Sum all the values together
	Give 1 second delay for each prompt
	
	Count the number of large values entered (if x>100)
	Calculate the average of the 3 values
	Print out: Sum, Large Values Count & Average
*/

#include <stdio.h>
#include <windows.h>			// Library for sleep

int main(void)
{
	int i, count=0;
	double x, sum=0, average;
	
	for(i=1 ; i<=3 ; i++)
	{
		printf("Please enter a value: ");
		scanf(" %lf", &x);
		
		if(x>100)
		{
			count++;			// Count the number of large values
		}
		
		sum = sum+x;
		
		Sleep(1000);			// 1 sec delay
	}
	
	average = sum/3;
	
	printf("\nSum = %.1f", sum);
	printf("\nLarge Values Count = %d", count);
	printf("\nAverage = %.1f", average);
	
	return 0;
}
