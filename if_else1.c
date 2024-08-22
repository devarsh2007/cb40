// write a program that check user is eligible or not for voting

// if(condition)
// {
//       true
// }
// else
// {
//       false
// }


#include<stdio.h>
void main()
{
      int age;

      printf("enter your age : ");
      scanf("%d",&age);

      if(age>=18)
      {
            printf("you are eligible for voting...");
      }
      else
      {
            printf("you are not eligible for voting...");
      }
}