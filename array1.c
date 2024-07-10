#include<stdio.h>

int marks_input(int count)
{
      int marks[5];
      printf("enter mark%d : ",count+1);
      scanf("%d",&marks[count]);

      printf("\n%d",marks[count]);
      printf("\n------------------------------------\n");
}



void main()
{
      int mark[5];

      // marks[0] = 20;
      // printf("%d",marks[0]);

      // printf("enter mark1 : ");
      // scanf("%d",&marks[0]);

      // printf("%d",marks[0]);

      // int c=0;

      for(int i=0;i<=4;i++)
      {
            // c++;
            marks_input(i);
      }

      
}