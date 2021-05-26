#include<stdio.h>
void main(){
    int i , j , row , col ;
    printf("Enter no. of rows :");
    scanf("%d",&row);
    printf("Enter no.of Coloumns : ");
    scanf("%d",&col);
    int arr[row][col], transpose[row][col];
    printf("Enter elements of array");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array elements are : \n");
     for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",arr[i][j]);
            transpose[i][j] = arr[j][i];
        }
        printf("\n");
    }
    printf("Transpose of matrix : \n");
     for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
             printf("%d\t",transpose[i][j]);
            
        }
         printf("\n");
    }
    
    

}