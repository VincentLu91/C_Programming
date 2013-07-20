/* Write a main() program that asks the user for an integer N, and then
 calculates three sums: the sum of the even integers, the sum of the odd
 integers, and the sum of all integers from 0 to N. However, exclude from the
 sums whose integers that are divisible by 3 or divisible by 4. The output is
 Enter n: 10
 Sum = 25, Sum of Odd = 13, Sum of Even = 12 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, n, totalSum=0, oddSum=0, evenSum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=0; i<=n; i++) {
		if((i%3!=0) && (i%4!=0)){
			totalSum += i;
			if(i%2==0)
				evenSum += i;
			else
				oddSum += i;
		}
		else {
			if (totalSum >= 100)
				break;
			else
				continue;
		}
	}
	printf("Sum = %d, Sum of Odd = %d, Sum of Even = %d\n",
			totalSum, oddSum, evenSum);
	return 0;
}
