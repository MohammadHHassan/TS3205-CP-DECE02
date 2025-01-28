// day3
// LearningNestedIf

#include <stdio.h>

int main(void)
{
	int age;
	
	printf("Please enter your age: ");
	scanf(" %d", &age);
	
	if(age>=0)
	{
		printf("Age entered is valid.\n");
		
		if(age<12)
		{
			printf("Children.\n");
		}
		else if(age>=12 && age<18)
		{
			printf("Teenager.\n");
		}
		else if(age>=18 && age<60)
		{
			printf("Adult.\n");
			
			if(age<=30)
			{
				printf("Young Adult.\n");
			}
			else
			{
				printf("Mature Adult.\n");
			}
		}
		else
		{
			printf("Senior.\n");
		}
	}
	else
	{
		printf("Age entered is invalid.\n");
	}
	
	return 0;
}
