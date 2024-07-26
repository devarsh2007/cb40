#include<stdio.h>
void main()
{
      // input

      int number;
      float weight;
      char name;

      printf("enter name : ");
      scanf("%c",&name);
      
      printf("enter a number : ");
      scanf("%d",&number);

      printf("enter weight : ");
      scanf("%f",&weight);


      printf("\nnumber : %d",number);
      printf("\nweight : %f",weight);
      printf("\nname : %c",name);
}