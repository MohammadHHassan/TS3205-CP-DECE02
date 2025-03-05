// day5
// ScreenClear

#include <stdio.h>			// Library for printf/scanf
#include <windows.h>		// Library for delay
#include <stdlib.h>			// Library for screen clear

int main(void)
{
	int i;
	
	for(i=10 ; i>=0 ; i--)
	{
		printf("This program will be terminated in %d second(s)", i);
		Sleep(1000);		// Delay for 1 sec / 1000 ms
		system("cls");		// To clear the screen
	}
	
	printf("Bye!");
	
	return 0;
}
