#include<stdio.h>
void main(){
    int n1 = 0 ,n2 = 1, n3,n,i;
    printf("Enter Number :");
    scanf("%d",&n);
    printf("Fabonacci series : ");
    for(i=2;i<15;i++)
    {
        n3 = n1 +n2;
        printf("%d ",n3);
        n1 =n2;
        n2 = n3;
    }
}