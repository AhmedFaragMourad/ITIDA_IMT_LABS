#include"stdio.h"

void swap(int *ptr1,int *ptr2)
{
	*ptr2=(*ptr1+*ptr2)-(*ptr1=*ptr2);
}
void main(void)
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		printf("please enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	/////////////Sort/////////
	
	for(int i=0;i<9;i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(&arr[i],&arr[i+1]);
			
			i= -1;
		}
	}
	////Print sorted'
	printf("Values after sort:\n");
	for(int k=0;k<10;k++)
	{
		printf("%d\n",arr[k]);
	}
}