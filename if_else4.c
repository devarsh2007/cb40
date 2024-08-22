// if(){}
// else if(condition)
// {
//       code
// }
// else if()
// else{}

#include<stdio.h>
void main()
{
      float a,b;

      printf("enter a : ");
      scanf("%f",&a);

      printf("enter b : ");
      scanf("%f",&b);

      if(a>b)
      {
            printf("a is max");
      }
      else if(a==b)
      {
            printf("both are same");
      }
      else
      {
            printf("b is max");
      }
}