#include <stdio.h>
void main()
{
    int i, j, k, row, col, sum;
    printf("Enter no of row : ");
    scanf("%d", &row);
    printf("Enter no of coloumns : ");
    scanf("%d", &col);
    int arr1[row][col], arr2[row][col], multi[2][2];
    printf("Enter first array elements : ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter Second array elements : ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf(" \n first matrix");
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf(" \n second matrix");
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            multi[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                multi[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("\n result \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d \t", multi[i][j]);
        }
        printf("\n");
    }
}
