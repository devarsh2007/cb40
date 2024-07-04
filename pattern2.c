// * * *
// * * *
// * * *

#include <stdio.h>
void main()
{
      // printf("*");
      // printf("*");
      // printf("*");

      int number;

      printf("enter number : ");
      scanf("%d",&number);

      for (int row = 1; row <= number; row++)
      {
            for (int col = 1; col <= number; col++)
            {
                  printf("* ");
            }
            printf("\n");
      }

      // for(int row=1;row<=3;row++)
      // {
      //       printf("*");
      // }

      // printf("\n");

      // for(int row=1;row<=3;row++)
      // {
      //       printf("*");
      // }
      // printf("\n");
}