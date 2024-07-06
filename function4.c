// Circumference of circle
// C=2πr

#include<stdio.h>

// without argument with return value function
float getpi()
{
      return 3.14;
}

void main()
{
      float r;
      printf("enter radius : ");
      scanf("%f",&r);

      printf("Circumference of circle : %.2f",2*getpi()*r);
}