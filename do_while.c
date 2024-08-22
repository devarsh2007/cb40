// 0 1 1 2 3 5 8 ...13
// a b c
//   a b c
//     a b c
// fibonaci series

#include <stdio.h>
void main()
{
    int a = 0;
    int b = 1;
    int c;

    printf("%d ", a);
    printf("%d ", b);

    c = a + b;
    printf("%d ", c);

    do
    {
        a = b;
        b = c;

        c = a + b;
        printf("%d ", c);
    } while (c < 4);

    // a=b;
    // b=c;

    // c=a+b;
    // printf("%d",c);

    // a=b;
    // b=c;

    // c=a+b;
    // printf("%d",c);

    // a=b;
    // b=c;

    // c=a+b;
    // printf("%d",c);
}