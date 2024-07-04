// *
// **
// ***
// ****

#include <stdio.h>
void main()
{
      // int count=1;
      int num;
      char symbol;

      printf("enter a symbol : ");
      scanf("%c",&symbol);

      printf("enter a number : ");
      scanf("%d",&num);

      

      for (int j = 1; j <= num; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("%c ",symbol);
            }
            printf("\n");
            // count++;
      }

      // for(int i=1;i<=2;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=3;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
}