#include<stdio.h>
void main(){
    int num, temp, rev = 0,m;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;
    while(num!=0){
        m = num%10;
        rev = rev*10+m;
        num = num/10;
    }
    printf(" rev = %d\n",rev);
    if(temp == rev)
    {
        printf("Number is palimdrome");
    }
    else
    {
        printf("Number is not palimdrome");
    }
    

}