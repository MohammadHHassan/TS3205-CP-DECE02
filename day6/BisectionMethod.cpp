// day6
// BisectionMethod

#include <stdio.h>
#include <math.h>

int main(void)
{
	double xmin, xmid, xmax, fmin, fmid, p;
	int count=0;
	
	printf("This program finds the root of pow(x,3)+(2*x)-4=0 using Bisection Method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	do
	{
		count++;
		
		xmid = 0.5*(xmin+xmax);
		
		fmin = pow(xmin,3)+(2*xmin)-4;
		fmid = pow(xmid,3)+(2*xmid)-4;
		
		p = fmin*fmid;
		
		if(p<0)
		{
			xmax = xmid;		// The root lies in lower half
		}
		else if(p>0)
		{
			xmin = xmid;		// The root lies in upper half
		}
		else					// p==0
		{
			break;				// Exit from the loop, found the root
		}
		
	}while(xmax-xmin>1e-9);		// Repeat while the difference is > 0.000000001
	
	printf("\n\nRoot = %f", xmid);		// Display the root
	printf("\nNumber of iterations = %d", count);
	
	return 0;
}
