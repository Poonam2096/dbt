#include<stdio.h>
void main(){
    int sal, Hra,Da,Gsal;
    printf("Enter a salary :");
    scanf("%d",&sal);
    if(sal<=10000){
        Hra =  sal *0.20;
        printf("Hra = %d\n",Hra);
        Da = sal *0.80;
        printf("Da = %d\n",Da);
        Gsal = sal+Hra+Da;
        printf("Gross Salry : %d\n",Gsal);
    }
    else if(sal<=20000)
    {
        Hra =  sal *0.25;
        printf("Hra = %d\n",Hra);
        Da = sal *0.90;
        printf("Da = %d\n",Da);
        Gsal = sal+Hra+Da;
        printf("Gross Salry : %d\n",Gsal);
    }
    else{
        Hra =  sal *0.30;
        printf("Hra = %d\n",Hra);
        Da = sal *0.95;
        printf("Da = %d\n",Da);
        Gsal = sal+Hra+Da;
        printf("Gross Salry : %d\n",Gsal);
    }
}