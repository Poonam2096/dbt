#include <stdio.h>
int main()
{
    int i, j, k, rows, count, temp;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("\n");
    count = rows - 1;

    for (i = 0; i <= rows; i++)
    {
        for (k = 0; k <= count*2+1; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 0; --j)
        {
            printf("%d", j);
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        count--;
        printf("\n");
    }
    count = 1;
    for (i = rows - 1; i >= 0; i--)
    {
        for (k = 1; k <= count*2; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 0; --j)
        {
            printf("%d", j);
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        count++;

        printf("\n");
    }
}