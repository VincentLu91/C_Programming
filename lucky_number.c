#include <stdio.h>

int main(void)
{
  int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	if(number > 5)
		printf("The number you entered is greater than the lucky number\n");
	else if(number < 5)
		printf("The number you entered is smaller than the lucky number\n");
	else
		printf("You entered the lucky number!\n");
	return 0;
}
