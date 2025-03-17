// day7
// Exercise1

/*	Declare one function called void yourName with one parameter n (int)
	This function will print out your name n number of times
	
	In the main function, ask the user how many times do they want
	their name to be printed and store it in x (int).
	Call the function and use x as the parameter.
*/

#include <stdio.h>

void yourName(int n);

int main(void)
{
	int x;
	
	printf("How many times do you want your name to be printed?\n");
	scanf(" %d", &x);
	
	yourName(x);
	
	return 0;
}

void yourName(int n)
{
	int i;
	
	for(i=1 ; i<=n ; i++)
	{
		printf("%d. Haji Mohammad bin Haji Hassan\n", i);
	}
}
