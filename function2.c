// write a function that perform addition of 2 numbers
// with argument without return value function

#include<stdio.h>

void addition(int a,int b)
{
      printf("addition: %d",a+b);
}

void main()
{
      int num1,num2;

      printf("enter a : ");
      scanf("%d",&num1);

      printf("enter b : ");
      scanf("%d",&num2);

      addition(num1,num2);
}