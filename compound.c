#include<stdio.h>
#include<math.h>
void main()
{
      float p,r,n,t,ci;

      printf("enter amount : ");
      scanf("%f",&p);

      printf("enter rate : ");
      scanf("%f",&r);


      printf("enter time : ");
      scanf("%f",&t);
      n=365;
      r=r/100;
      float a1 = n*t;
      float a2 = r/n;


      ci = p*(pow((1+a2),(a1))); 
      printf("compound interest : %.2f",ci);

}