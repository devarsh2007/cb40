#include<stdio.h>

// with argumnet with return value fuction

float getarea(float r)
{
      return 3.14*r*r;
}

void main()
{
      float radius;
      printf("enter radius : ");
      scanf("%f",&radius);

      // area= getarea(radius);
      // printf("%f",area);

      printf("area of circle : %.2f",getarea(radius));
}