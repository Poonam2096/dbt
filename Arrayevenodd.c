#include<stdio.h>
#include<stdlib.h>
void evenodd(int *ptr,int n);
void main()
{
	int* arr;
	int n,i;
	printf("enter the number of values\n");
	scanf("%d",&n);
	arr= (int*) malloc(sizeof(int)*n);
	printf("Enter values\n");	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	evenodd(arr,n);
	
}

void evenodd(int* ptr,int n)
{
for(int i=0;i<n;i++)
{

	if((ptr[i])%2==0)
	printf("%d even number\n",ptr[i]);
	else
	printf("%d odd number\n",ptr[i]);	

}
}