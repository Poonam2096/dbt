#include<stdio.h>
void main(){
    int sum ,a,b,c;
    printf("Enter threesides value of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    printf("Sum of angles : %d\n",sum);
    if(sum==180){
        printf("triangle is valid");
    }
    else{
        printf("triangle is invalid");
    }
}