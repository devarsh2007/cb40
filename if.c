// check a number is even or not

#include<stdio.h>
void main()
{
      int num;

      printf("enter a number : ");
      scanf("%d",&num);

      // printf("%d",num/2);
      // printf("%d",num%2);

      if(num%2 == 0)
      {
            printf("number is even");
      }

      if(num%2 == 1)
      {
            printf("number is odd");
      }

}