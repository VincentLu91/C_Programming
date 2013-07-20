#include <stdio.h>

int main(void)
{
  int number;
	printf("Please enter a number: ");
	scanf("%d", &number);

	switch(number)
	{
		case 5:
			printf("You entered exactly the lucky number!\n");
			break;
		case 4:
			printf("You entered one less than the lucky number\n");
			break;
		case 6:
			printf("You entered one more than the lucky number\n");
			break;
		default:
			printf("You entered nowhere near the lucky number\n");
			break;
	}
	return 0;
}
