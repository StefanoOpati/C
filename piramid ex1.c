

#include <stdio.h>

int main()
{
   int row, c, n, column;

   printf("Enter the number of rows in pyramid of stars you wish to see ");
   scanf("%d",&n);

   column = n;

   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < column ; c++ )
         printf(" ");

      column--;

      for ( c = 1 ; c <= 2*row - 1 ; c++ )
         printf("*");

      printf("\n");
   }
  return 0;
}
