#include<stdio.h>
int main(){
    int n,i,t;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
            if(n%i==0)
            {
                printf("Number is not Prime");
                t=1;
                break;
            }
            else if(t==0)
            {
                printf("Number is prime");
            }
    }
}
