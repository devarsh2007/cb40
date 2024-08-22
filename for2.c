// factorial

#include<stdio.h>
void main()
{
    int num=0;
    int answer=1;

    printf("enter number : ");
    scanf("%d",&num);

    for(int count=1;count<=num;count++)
    {
        answer=answer*count;
    }
    printf("%d ",answer);
       
    
    
}