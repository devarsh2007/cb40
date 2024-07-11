// two dimentional array

#include<stdio.h>
void main()
{
      int student[3][5];
      int marks;

      for(int i=0;i<=3;i++)
      {
            for(int j=0;j<=5;j++)
            {
                  printf("enter marks : ");
                  scanf("%d",&marks);

                  student[i][j] = marks;

                  printf("\n-----------------------------------\n");
            }
      }

      for(int i=0;i<=3;i++)
      {
            for(int j=0;j<=5;j++)
            {
                  printf("%d",student[i][j]);

                  printf("\n-----------------------------------\n");
            }
      }
      
}