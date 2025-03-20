// day8
// LearningArrays
// Array = A collection of elements with the same data type

#include <stdio.h>

int main(void)
{
	int u[3] = {1, 2, 3};
	int i, s[3];
	
	printf("u = (%d, %d, %d)\n", u[0], u[1], u[2]);
	
	printf("\nUsing for loop, u = (");
	for(i=0 ; i<3 ; i++)
	{
		printf("%d   ", u[i]);
	}
	printf(")\n");
	
	for(i=0 ; i<3 ; i++)
	{
		s[i] = u[i]*2;
	}
	
	for(i=0 ; i<3 ; i++)
	{
		printf("\ns[%d] = %d", i, s[i]);
	}
	
	return 0;
}
