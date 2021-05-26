#include<stdio.h>
void main()
{
    int n, sum =0 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf(" Factors of %d is : \n",n);
    for (int i = 1; i < n; i++)
    {
        if ((n%i)==0)
        {
           printf("%d\n",i);
           sum = sum +i;
        }
        
    }
    //printf("Sum : %d",sum);
    if(sum==n)
    {
        printf(" %d is a Perfect number",n);
    }
    else
    {
        printf("%d is not a Perfect number",n);
    }
    
}