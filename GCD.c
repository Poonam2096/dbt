#include<stdio.h>
int main(){
    int n1 , n2, fact,max,gcd;
    printf("Enter a number : ");
    scanf("%d",&n1);
    printf("Enter a number : ");
    scanf("%d",&n2);
    if(n1>n2)
        max = n1;
    else
        max = n2;
    while(1){
        if(max%n1==0 && max%n2==0)
        {
            break;
        }
        ++max;
    }
    gcd=(n1 * n2)/max;
    printf("GCD = %d",gcd);
}