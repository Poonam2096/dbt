#include<stdio.h>
void main()
{
    int n,i,sum_even = 0,sum_odd;
    printf("Enter range of number :");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if((i%2)==0)
        {
            printf("even numbers :%d\n",i);
            sum_even = sum_even + i;
            
        }
        else{
            printf("odd numbers :%d\n",i);
            sum_odd = sum_odd + i;
        }
    }
    printf("sum of even numbers: %d\n",sum_even);
    printf("sumof odd numbers: %d",sum_odd);
}