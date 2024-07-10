#include<stdio.h>
void main()
{
      char name[10];

      printf("enter name : ");
      for(int i=0;i<=9;i++)
      {
            scanf("%c",&name[i]);
      }

      for(int i=0;i<=9;i++)
      {
            printf("%c",name[i]);
      }
      
      printf("\nreverse : ");
      for(int i=9;i>=0;i--)
      {
            printf("%c",name[i]);
      }



}