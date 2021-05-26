#include<stdio.h>
void main()
{
    int n , rev =0,m;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0)
        {
            m = n%10;
            rev = rev*10+m;
            n = n/10;
            
        }
        printf("Reverse of digits : %d",rev);
       
}