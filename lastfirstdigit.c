#include<stdio.h>
void main()
{
    int n, a, m;
    printf("Enter a number :");
    scanf("%d",&n);
        a = n % 10;
        while(n>=10)
        {
            n = n/10;
            m = n;
        }
       
        printf("Last Digit :%d\n",a);
        printf("First Digit : %d",m);
}
