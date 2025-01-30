// day4
// LearningDelay

#include <stdio.h>			// Library for printf and scanf
#include <windows.h>		// Library for delay

int main(void)
{
	int a=1;
	
	while(a<=10)
	{
		printf("%d. Haji Mohammad bin Haji Hassan\n", a);
		a++;
		Sleep(1000);			// Delay for 1000ms / 1s
	}
	
	return 0;
}
