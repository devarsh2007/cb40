// create function that find area of triangle
#include<stdio.h>
// with argument with return value function
float getarea(float b,float h)
{
      return (h/2)*b;
}

void main()
{
      float b,h;
      printf("enter base : ");
      scanf("%f",&b);

      printf("enter height : ");
      scanf("%f",&h);

      printf("area of triangle : %.2f",getarea(b,h));
}