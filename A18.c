#include <stdio.h>
#include <stdlib.h>

/* Puzzle A18 -- print a wedge of stars, n stars in the first row
|
|  Decrease the number of stars per row until the final row
|  has one star.
*/
int main(int argc, char *argv[])
{
  int row, col;
  int n=15 ;
  
  for (row=0; row < n; row++)
  {
    for (col = 0; col < n-row; col++)
      printf("*");
    printf("\n");
  }
  
  system("pause");
  return 0;
}
