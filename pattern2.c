#include<stdio.h>
void main()
{
    int row,space, l = 0 , k,i,j;
    printf("Enter row size : ");
    scanf("%d",&row);
    for (i = 1;i<=row;i++)
    {
        l=i-1;
        for ( space = 1; space <= row-i ; space++)
        {
            printf(" ");
        }
        for (k = i-1; k < i+l; k++)
        {
            printf("%d",k+1);
        }
        for(j=i+l-1;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
