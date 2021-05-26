#include<stdio.h>
void main()
{
    int row,space, l = 0 , k,i,j,m , n, o;
    printf("Enter row size : ");
    scanf("%d",&row);
    for (i = 1;i<=row;i++)
    {
        l=i-1;
        m = l-1;
        for ( space = 1; space <= row-i ; space++)
        {
            printf(" ");
        }
        for (k = i-1; k < i+l; k++)
        {
            if(k<l+1) 
                printf("%d",i-k);
            else
                printf("%d",k-m);
        }
        for(j=i+l-1;j>=i;j--)
        {
            printf("%d",j-l);
        }
        printf("\n");
    }
    for(n=row;n>row;n--)
    {
        for ( space = row-n ; space <= row-i ; space++)
        {
            printf(" ");
        }
        for(o=row-n; o<n; o--)
        {
            printf("%d",n+1);
        }

    }
}
