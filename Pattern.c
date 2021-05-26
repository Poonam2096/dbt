#include<stdio.h>
void main()
{
    int row,space, l = 0 , k,i;
    printf("Enter row size : ");
    scanf("%d",&row);
    for (i = 1;i<=row;i++)
    {
        l = i-1;
        for ( space = 1; space <= row-i ; space++)
        {
            printf(" ");
        }
        for ( k = 0; k < i+l; k++)
        {
            printf("*");
        }
        printf("\n");
    }



}
