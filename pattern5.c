// a
// ab
// abc
// abcd

#include <stdio.h>
void main()
{
      int number;
      printf("enter character : ");
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
                  for (int i = 1; i <= j; i++)
                  {
                        printf("%c ", count + i);
                  }
                  printf("\n");
            }
      }

      // printf("%c",count+1);
      // for(int i=1;i<=2;i++)
      // {
      //       printf("%c",count+i);
      // }
      // printf("\n");

      // // printf("%c",count+1);
      // // printf("%c",count+2);
      // // printf("%c",count+3);
      // for(int i=1;i<=3;i++)
      // {
      //       printf("%c",count+i);
      // }
      // printf("\n");

      // // printf("%c",count+1);
      // // printf("%c",count+2);
      // // printf("%c",count+3);
      // // printf("%c",count+4);
      // for(int i=1;i<=4;i++)
      // {
      //       printf("%c",count+i);
      // }
      // printf("\n");
}