#include"stdio.h"


void main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Please Enter Number %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Value in reversed order: \n");
	for(int i=9;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	
}