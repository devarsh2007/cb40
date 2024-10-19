// a
// ab
// abc

#include<stdio.h>
void main()
{
    for (int j = 97; j <= 100; j++)
    {
        for (int i = 97; i <= j; i++)
        {
            printf("%c ",j);
        }
        printf("\n");
        // count++;
    }
    
}