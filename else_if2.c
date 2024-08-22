// 12 - one two
// 23 - two three
#include<stdio.h>
void main()
{
      int num;
      printf("enter number : ");
      scanf("%d",&num);

      int a = num/10;
      printf("a=%d",a);

      int b =num%10;
      printf("\nb=%d",b);
      printf("\n");
      if (a == 0)
      {
            printf("zero");
      }
      else if (a==1)
      {
            printf("one");
      }
      else if (a==2)
      {
            printf("two");
      }
      else if (a==3)
      {
            printf("three");
      }
      else if (a==4)
      {
            printf("four");
      }
      else if (a==5)
      {
            printf("five");
      }
      else if (a==6)
      {
            printf("six");
      }
      else if (a==7)
      {
            printf("seven");
      }
      else if (a==8)
      {
            printf("eight");
      }
      else if (a==9)
      {
            printf("nine");
      }
      else{
            printf("invalid input...");
      }
      
      printf(" - ");

      if (b == 0)
      {
            printf("zero");
      }
      else if (b==1)
      {
            printf("one");
      }
      else if (b==2)
      {
            printf("two");
      }
      else if (b==3)
      {
            printf("three");
      }
      else if (b==4)
      {
            printf("four");
      }
      else if (b==5)
      {
            printf("five");
      }
      else if (b==6)
      {
            printf("six");
      }
      else if (b==7)
      {
            printf("seven");
      }
      else if (b==8)
      {
            printf("eight");
      }
      else if (b==9)
      {
            printf("nine");
      }
      else{
            printf("invalid input...");
      }
}