#include<stdio.h>
void main(){
    int n ,i = 0 ;
    printf("Enter a range : ");
    scanf("%d", &n);
    printf("Reverse of Natural numbers :\n");
    while(n!=0)
    {
        printf("%d\n",n);
        n--;
    }
}