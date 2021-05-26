#include<stdio.h>
void main(){
    int n ,i = 0 ;
    printf("Enter a range : ");
    scanf("%d", &n);
    printf("Natural numbers are from 1 to %d :\n",n);
    while(i<n)
    {
        i++;
        printf("%d\n",i);
    }
    printf("Reverse :\n");
    while(n!=0)
    {
        printf("%d\n",n);
        n--;
    }
}