#include <stdio.h>

int main(void)
{
  int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	if(number > 5)
	{
		if(number%2 == 1)
			printf("The number you entered is odd\n");
		else
			printf("The number you entered is even\n");
	}
	else if(number < 5)
	{
		if(number < 0)
			printf("The number you entered is negative\n");
		else if(number > 0)
		{
			printf("The number you entered is positive ");
			printf("but less than the lucky number\n");
		}
		else
			printf("The number you you entered is 0\n");
	}
	else
		printf("You entered the lucky number!\n");
	return 0;
}
