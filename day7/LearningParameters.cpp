// day7
// LearningParameters

#include <stdio.h>

void stars(int n);		// Declaration of stars function with 1 parameter n

int main(void)
{
	int k=5;
	
	stars(k);
	stars(2*k);
	stars(20);
	
	return 0;
}

void stars(int n)
{
	int i;
	
	for(i=1 ; i<=n ; i++)
	{
		printf("* ");
	}
	printf("\n");
}
