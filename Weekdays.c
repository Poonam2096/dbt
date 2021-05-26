#include<stdio.h>
void main()
{
    int m ;
    while(m!=0)
    {
        printf("Enter a number from 1 t0 7 to know the weekday...\nOr 0 for Exit : \n");
        scanf("%d",&m);
        switch (m)
        {
            case 1:
            printf("Monday\n");
            break;
            case 2:
            printf("Tuesday\n");
            break;
            case 3:
            printf("Wednesday\n");
            break;
            case 4:
            printf("Thursday\n");
            break;
            case 5:
            printf("Friday\n");
            break;
            case 6:
            printf("Saturday\n");
            break;
            case 7:
            printf("Sunday\n");
            break;
            default:
            break;
        }
    }
}   