/* Write a function that prints a line of N stars followed by an end of line.
 N is the parameter of the function. Here is the output of the function
 when N is 8:

********
*/
#include <stdio.h>
void starLine(int n) {
  int i;
	for(i = 0; i < n; i++)
		printf("*");
	printf("\n");
}
int main(int argc, char *argv[]) {
	starLine(8);

	system("PAUSE");
	return 0;
}
