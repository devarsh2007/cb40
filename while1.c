// loop
// 1) while loop
// 2) for loop
// 3) do while loop

// write a program that print 1 to 100 numbers
#include <stdio.h>
void main()
{
    int count = 0;

    while (count < 10)
    {
        count++; // incriment
        printf("%d ", count);
    }

    // count++;
    // printf("%d",count);

    // count++;
    // printf("%d",count);

    // count++;
    // printf("%d",count);

    // write a program that print symol
    char symbol,symbol2;
    int n;
    printf("\nenter a symbol : ");
    scanf("%c", &symbol);

    printf("enter symbol 2 : ");
    scanf(" %c",&symbol2);

    printf("enter number : ");
    scanf("%d", &n);
    int number = 1;

    while (number <= n)
    {
        printf("%c %c ", symbol,symbol2);
        number++;
    }

    // printf("%c",symbol);
    // printf("%c",symbol);
    // printf("%c",symbol);
    // printf("%c",symbol);
}