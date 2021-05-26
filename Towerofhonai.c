#include<stdio.h>
void tower(int,char,char,char);

void tower(int n ,char from ,char to ,char mid)
{
    if(n==1)
    {
        printf("move Disc 1 from %c to %c\n",from,to);
        return;
    }
    tower(n-1,from,mid,to);
    printf("move Disc %d from %c to %c\n",n,from,to);
    tower(n-1,mid,to,from);

}
void main(){
    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
}