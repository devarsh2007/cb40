#include <stdio.h>
void main()
{
    float maths, science, english, total;

    printf("enter marks of maths : ");
    scanf("%f", &maths);

    printf("enter marks of science : ");
    scanf("%f", &science);

    printf("enter marks of english : ");
    scanf("%f", &english);

    if ((maths > 0 && maths < 100) && (science > 0 && science < 100) && (english > 0 && english < 100))
    {
        total = (maths + science + english) / 3;
        printf("\n────────────────result────────────────\n");
        printf("\n------------------------------------------");
        printf("\npercantage : %.2f %%", total);
        printf("\n------------------------------------------");

        if (total < 40)
        {
            printf("\n------------------------------------------");
            printf("\nstatus : Fail");
            printf("\n------------------------------------------");
        }
        else
        {
            printf("\n------------------------------------------");
            printf("\nstatus : Pass");
            printf("\n------------------------------------------");
        }

        printf("\n------------------------------------------\n");
        if (total > 80 && total < 100)
        {
            printf("grad : A");
        }
        else if (total > 60 && total <= 80)
        {
            printf("grad : B");
        }
        else if (total > 40 && total <= 60)
        {
            printf("grad : C");
        }
        else if (total <= 40)
        {
            printf("grad : D");
        }
        printf("\n------------------------------------------");
    }
    else
    {
        printf("invalid marks");
    }
}