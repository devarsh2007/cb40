#include<stdio.h>
void main()
{
      printf("1 -> addition\n2 -> subtraction\n3 -> divison\n4 -> multiplication");
      int choise;

      printf("\nenter your choise : ");
      scanf("%d",&choise);

      float a,b;

      printf("enter a : ");
      scanf("%f",&a);
      printf("enter b : ");
      scanf("%f",&b);

      // printf("%f",a);

      if(choise==1)
      {
            // c=a+b;
            printf("addition : %.1f",a+b);
      }
      else if(choise==2)
      {
            printf("subtraction : %.1f",a-b);
      }
      else if(choise==3)
      {
            printf("division : %.1f",a/b);
      }
      else if(choise==4)
      {
            printf("multiplication : %.1f",a*b);
      }
      else
      {
            printf("invalid input....");
      }
}