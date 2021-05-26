#include<stdio.h>
void HextoOct(int);
void OcttoHex(int);

void OcttoHex(int n){
    printf("Num=%x Num=%d \n",n,n); 

}
void HextoOct(int n)
{
    printf("Num=%o Num=%d \n",n,n);
}

int main()
{
    
    int num = 012 ; 
    int num2 = 0x32;
   // printf("Enter number:");
    //scanf("%d",&num);
    printf("Oct to Hex :");
    OcttoHex(num);
    printf(" Hex to Oct  :");
    HextoOct(num2);
    return 0;
}
