#include<stdio.h>

void add(int n1,int n2)
{
    printf("%d",n1+n2);
}

void main()
{
    int a,b;

    printf("enter num1 : ");
    scanf("%d",&a);

    printf("enter num2 : ");
    scanf("%d",&b);

    add(a,b);
    
}