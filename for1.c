// write a program that print table
// for(insilizasion ; condition ; increment/decrement)
// {
//     // code
// }
// 5 x 1 = 5

#include <stdio.h>
void main()
{
    int number ;
    printf("enter number : ");
    scanf("%d",&number);

    for (int count = 1; count <= 10; count++)
    {
        // count++;
        printf("\n%d x %d = %d", number, count, number * count);
    }

    // count++;
    // printf("\n%d x %d = %d",number,count,number*count);

    // count++;
    // printf("\n%d x %d = %d",number,count,number*count);
}