#include<stdio.h>

float getpi()
{
    return 3.14;
}

void main()
{
    printf("%f",getpi());

    float area = getpi()*10*10;

    printf("\n%f",area);
}