// 100 - 1
#include<stdio.h>
void main()
{
    int count = 100;
    
    while(count>0)
    {
        printf("%d ",count);
        count--;
    }
    printf("\n\n"); 
    //1,4,9,16,...100

    int num = 0;

    while(num<10)
    {
        num++;
        printf("%d ",num*num);
    }
     
}
