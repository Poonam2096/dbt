#include<stdio.h>
#include<stdlib.h>
void primeno(int*,int);
void main()	
{
	int*arr;
	int i,n;
	printf("enter range of array\n");
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
    printf("enter Array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	primeno(arr,n);
}
void primeno(int* ptr,int n)
{
	int p;
	int i;

	for(i=0;i<n;i++)
	{
		
		p=2;
		do
		{
			if(ptr[i]==0||ptr[i]==1)
				break;
			else if(ptr[i]%p==0)
			  break;			
			else
			 p++;
		}while(p);
		
		if(p==ptr[i])
			{
			printf("%d is prime number\n",ptr[i]);
			}
			else{
				printf("%d is not prime number\n",ptr[i]);
			}
	}	
}