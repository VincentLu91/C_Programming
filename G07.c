/* As bulbs age, their light output decreases. Write a function that changes
   the number of lumens of a Bulb by decreasing it by 10 percent */
#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb* b )
{
  printf("watts: %d	lumens: %d\n", b->watts, b->lumens);
}

void dimBulb( struct Bulb* b )
{
	b->lumens = b->lumens - (b->lumens * 0.1);
}

int main(int argc, char *argv[])
{
  /* declare and initialize a Bulb */
  struct Bulb x = {100, 1000};
  /* print the Bulb */
  printBulb(&x);
  /* decrease its light output */
  dimBulb(&x);
  /* print the Bulb */
  printBulb(&x);
  system("pause");	
  return 0;
} 
