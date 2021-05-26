#include<stdio.h>
int main()
{
    char ch[] = "Poonam";
    int i=0,count;
    printf("%c\n",ch[0]); 
    /*for ( i = 0; ch[i]!='\0'; i++)
    {
        count = i;
        printf("%d\n",count); 
    }
    printf("Count : %d ",count+1);*/
    
    /*while (ch[i]!='\0')
    {
        count = ++i;
    }
    printf("%d\n",count);*/ 

    do
    {
        count = ++i;
    } while (ch[i]!='\0');
    printf("%d\n",count);
   
}