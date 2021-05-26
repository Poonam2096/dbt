#include<stdio.h>
void main()
{
    char ch ,cg;
    printf("Enter Alphabet : ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch<='Z')
    {
        printf("Alphabet is in uppercase ... ");
    }
    else{
        printf("Alphabet is in lowercase ...");
    }
}