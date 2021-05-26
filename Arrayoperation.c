#include <stdio.h>
void main(){
    int i , num, sum=0, avg,min,max = 0;
    printf("Enter array size : ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter array elements : ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    min =arr[0];
    for(i=0;i<num;i++)
    {
        sum = sum+arr[i];
        avg = sum/num;
        if(min>arr[i])
        {
            min = arr[i];
        }
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
     printf("Sum of array : %d\n",sum);
      printf("Average of array : %d\n",avg);
      printf("Maximum no. of array is : %d\n",max);
      printf("Minimum no. of array is : %d\n",min);

}