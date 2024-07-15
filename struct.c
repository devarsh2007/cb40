#include<stdio.h>
void main()
{
      struct student
      {
           char name[40];
           int roll;
           float marks;
      };

      struct student s1;

      printf("enter your name : ");
      for(int i=0;i<=39;i++)
      {     
            scanf("%c",&s1.name[i]);
            if(s1.name[i]=='\n')
            {
                  break;
            }
      }

      printf("enter roll : ");
      scanf("%d",&s1.roll);

      s1.marks=12.4;

       for(int i=0;i<=39;i++)
      {
            printf("%c",s1.name[i]);
            if(s1.name[i] == '\n')
            {
                  break;
            }
      }

      printf("%d",s1.roll);
      printf("\n%f",s1.marks);
}