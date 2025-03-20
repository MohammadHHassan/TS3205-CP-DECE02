// day8
// LearningIntFunction

#include <stdio.h>

int campurSepuluh(int a);

int main(void)
{
	int x, y;
	
	x=50;
	printf("x = %d\n", x);
	
	y = campurSepuluh(x);
	printf("y = %d\n", y);
	
	printf("5+10 = %d\n", campurSepuluh(5));
	printf("33+10 = %d", campurSepuluh(33));
	
	return 0;
}

int campurSepuluh(int a)
{
	return a+10;
}
