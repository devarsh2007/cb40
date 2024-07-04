// a
// bb
// ccc
// dddd

#include <stdio.h>
void main()
{
      int number;
      printf("enter number : ");
      scanf("%d", &number);
      if (number > 26)
      {
            printf("number should less than 26");
      }

      else
      {
            int count = 96;

            for (int j = 1; j <= number; j++)
            {
                  count++;
                  for (int i = 1; i <= j; i++)
                  {
                        printf("%c", count);
                  }
                  printf("\n");
            }
      }

      //       count++;
      //       // printf("%c",count);
      //       for(int i=1;i<=2;i++)
      //       {
      //             printf("%c",count);
      //       }
      //       printf("\n");

      //       count++;
      //       // printf("%c",count);
      //       // printf("%c",count);
      //       // printf("%c",count);
      //      for(int i=1;i<=3;i++)
      //       {
      //             printf("%c",count);
      //       }
      //       printf("\n");

      //       count++;
      //       // printf("%c",count);
      //       // printf("%c",count);
      //       // printf("%c",count);
      //       // printf("%c",count);
      //       for(int i=1;i<=4;i++)
      //       {
      //             printf("%c",count);
      //       }
      //       printf("\n");
}