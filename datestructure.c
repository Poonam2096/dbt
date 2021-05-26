#include<stdio.h>

typedef struct Time{
    int hr;
    int min;
    int sec;
}t1;
t1 updated_time();
void Display(t1 t);
void main(){
    t1 td;
    td = updated_time();
    Display(td);
}
t1 updated_time()
{
    t1 t;
    int updated_min, updated_sec;
    printf("Enter hr from 0-23 : ");
    scanf("%d",&t.hr);
    printf("Enter min from 0-59 : ");
    scanf("%d",&t.min);
    printf("Enter sec from 0-59 : ");
    scanf("%d",&t.sec);
    if(t.min>=59 && t.sec>=59)
    {
        t.sec = 0;
        t.min++;
        t.hr++;
        if(t.min==0 && t.sec == 0)
        {
            updated_min = t.min+59;
            updated_sec = t.sec+30;
        }
    }
    return t;
    //printf("%d:%d:%d ",t.hr,t.min,t.sec);
}
void Display(t1 t)
{
    printf("%d:%d:%d ",t.hr,t.min,t.sec);
}

