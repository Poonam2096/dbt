#include<stdio.h>
#include<string.h>
void main(){
    int n , i ,j;
    char name[100][100], temp[50];
    printf("Enter no.of strings : ");
    scanf("%d",&n);
    for(i = 0 ; i<=n;i++)
    {
        fgets(name[i],sizeof name,stdin) ;
    }
    for ( i = 1; i <= n ; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
           if(strcmp(name[j],name[j+1])>0)
           {
               strcpy(temp,name[j]);
               strcpy(name[j],name[j+1]);
               strcpy(name[j+1],temp);
           }
        }
        printf("After sorting a string :");
        for(i=0;i<=n;i++){
            printf("%s \n",name[i]);
        }
        
    }
    
}