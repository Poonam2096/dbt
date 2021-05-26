#include<stdio.h>
int strcmp(char *arr,char *arr2);
void copy_string(char*, char*);
int string_length(char *);
//int strconcat(char *arr ,char *arr2);
int main()
{
    char arr1[10] = "Poonam";
    char arr2[10] = "Amol";
    char arr3[10] = "jagruti";
    char temp[20];
    int result=0, i, str_len;
    char *a = arr1;
    char *b = arr2;
    char *c = arr3;
    char *t = temp;
    result = strcmp(arr1 , arr2);
    str_len = string_length(arr1);
    //printf("%s \n" ,a);
    while(*a)
    {
        a++;
       
    }
    // printf("%s \n",b);
    while(*b)
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
    printf("Concatinated string : %s\n",arr1);
    //printf("%s \n" ,c);
    copy_string(temp,arr3);
    printf("Copied string : %s \n",temp);
    printf(" length of string %d \n",str_len);
    //printf("result %d", result);
    if(result==0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Both strings are different");
    }
}
int strcmp(char *arr,char *arr2)
{
    while(*arr == *arr2)
    {
        if(*arr == '\0' || *arr2 == '\0')
        {
            break;
        }
        arr++;
        arr2++;
    }
    if(*arr == '\0' && *arr2 == '\0')
        {
           // printf("equal");
            return 0;
        }
        else
        {
           // printf("not equal");
            return -1;
        } 

}
void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}
int string_length(char *g)
{
    int count = 0;
    while(*g!='\0')
    {
        count++;
        g++;
    }
    return count;
}