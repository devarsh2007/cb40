// 1
// 22
// 333
// 4444

#include <stdio.h>
void main()
{
      // int count = 0;
      int number;

      printf("enter number : ");
      scanf("%d",&number);

      for (int j = 1; j <= number; j++)
      {
            // count++;
            for (int i = 1; i <= j; i++)
            {
                  printf("%d ",j);
            }
            printf("\n");
      }

      // count++;
      // for (int i = 1; i <= 2; i++)
      // {
      //       printf("%d", count);
      // }
      // printf("\n");

      // count++;
      // for (int i = 1; i <= 3; i++)
      // {
      //       printf("%d", count);
      // }
      // printf("\n");

      // count++;
      // for (int i = 1; i <= 4; i++)
      // {
      //       printf("%d", count);
      // }
      // printf("\n");

//       +
//       + +
//       + + +
//       + + + +

//       4 4 4 4
//       3 3 3
//       2 2
//       1

//      1 1 1 1
//      2 2 2 2
//      1 1 1 1
//      2 2 2 2
}