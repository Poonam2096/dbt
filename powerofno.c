#include<stdio.h>
void main(){
    int base ,exp,pow=1;
    printf("Enter a base:");
    scanf("%d",&base);
    printf("Enter a exponential : ");
    scanf("%d",&exp);
    for(int i=1;i<=exp;i++)
    {
        pow = pow * base;

    }
    printf("power of number : %d",pow);

}
