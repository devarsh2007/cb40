// 1
// 12
// 123
// 1234

#include <stdio.h>
void main()
{
      int count = 0;
      int number;
      // int col=1;

      printf("enter number : ");
      scanf("%d",&number);

      for (int j = 1; j <= number; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("%d ", count + i);
            }
            printf("\n");
            // col++;
      }

      // // printf("%d",count+1);
      // for (int i = 1; i <= 2; i++)
      // {
      //       printf("%d", count + i);
      // }
      // printf("\n");

      // for (int i = 1; i <= 3; i++)
      // {
      //       printf("%d", count + i);
      // }
      // printf("\n");

      // for (int i = 1; i <= 4; i++)
      // {
      //       printf("%d", count + i);
      // }
      // printf("\n");

}