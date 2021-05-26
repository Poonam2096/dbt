#include <stdio.h>
void main(){
    int i,j,row,col, sum=0, min,max = 0;
    float avg;
    printf("Enter no of row : ");
    scanf("%d",&row);
    printf("Enter no of coloumns : ");
    scanf("%d",&col);
    int arr[row][col];
    min = arr[0][0];
    printf("Enter array elements : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Elements are : ");
     printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(min>arr[i][j])
            {
                min = arr[i][j];
            }
            if(max<arr[i][j])
            {
                max =arr[i][j];
            }
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
        
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum = sum + arr[i][j];
            if ((arr[i][j]%2)==0)
            {
                printf("%d number is even\n", arr[i][j]);
            }
            else
            {
                printf("%d number is odd\n", arr[i][j]);
            }
            if ((arr[i][j]%2)!=0)
            {
                 printf("%d prime number \n", arr[i][j]);
            }
            
        } 
    }
    printf("MAximum number is : %d \n",max);
    printf("Minimum number is : %d\n", min);
    printf("Sum : %d \n", sum);
    avg = sum/(row*col);
    printf("Average : %f", avg);

}