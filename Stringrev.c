#include <stdio.h> 
#include<string.h>

int main(void)
{
    char name[30] ,r,c;
    printf("Enter name:");
    scanf("%s",name);
    //r = strrev(name);
    c = strchr(name,0);
    printf("Name = %s \n" ,c);
    printf("Name = %d \n" ,c);
    return 0;
}

/*int main(void)
{
    char ch[]="Sunbeam";
    printf("%d \n",sizeof(ch));
    return 0;
}*/
 
/*int main(){
    char *ch = "Poonam";
    int i;
    int count=0;
    for ( i = 0; i < ch[i]; i++)
    {
            count++;
            
            
    }
    printf("%s",ch);
    
}*/
