#include<stdio.h>
void main(){
    char ch;
    printf("Enter a alphabet : ");
    scanf("%c", &ch);
    if(islower(ch))
    {
        printf("Uppercase of alphabet : %c",toupper(ch));
    }
    else
    {
        printf("Lowercase of Alphabet : %c",islower(ch));
    }
}