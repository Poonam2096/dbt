#include<stdio.h>
void main(){
    int m;
    printf("Enter a month : ");
    scanf("%d",&m);
    if (m>12 || m<1)
    {
        printf("Invalid Input");
    }
    else if(m==2)
    {
        printf("no.of days in month %d is either 28 0r 29..",m);
    }
    else if((m%2)!=0)
    {
         printf("no.of days in month %d is 31..",m);
    }
     else
    {
        printf("no.of days in month %d is 30..",m);
    }
}