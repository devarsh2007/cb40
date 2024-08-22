#include<stdio.h>
void main()
{
      int month;
      printf("enter a month : ");
      scanf("%d",&month);

      switch(month)
      {
            case 1:
                  printf("january");
                  break;

            case 2:
                  printf("february");
                  break;

            case 3:
                  printf("march");
                  break;
      
            default:
                  printf("invalid month...");
                  break;
      }

}