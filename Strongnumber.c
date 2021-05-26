#include<stdio.h>
int factorial(int r) {
   int fact = 1;
   while(r>1) {
      fact = fact * r;
      r--;
   }
   return fact;
}
void main()
{
    int n,temp, sum = 0,m;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(n)
    {
        m = n%10;
        sum = sum + factorial(m);
        n= n/10;
    }
    printf("factorial of number : %d\n",sum);
    //if(temp==sum)
    if(sum==temp)
    {
        printf("%d is a strong number ...",temp);
    }
    else{
        printf("%d is not a strong number ...",temp);
    }

}