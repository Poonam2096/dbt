#include<stdio.h>
void main()
{
    int n,a = 0, rem, temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        rem = n%10;
        //sum = sum+rem;
        n= n/10;  
        a = a + (rem*rem*rem);
    }
    if (a==temp)
    {
        printf("Number is Armstrong..");
    }
    else
    {
        printf("Number is not Armstrong..");
    }
}
    
    
    