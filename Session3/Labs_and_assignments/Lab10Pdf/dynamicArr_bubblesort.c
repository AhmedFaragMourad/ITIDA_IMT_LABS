#include"stdio.h"
#include "stdlib.h"
void swap(int *ptr1,int *ptr2)
{
	*ptr2=(*ptr1+*ptr2)-(*ptr1=*ptr2);
}



void main()
{
	
	int Elements;
	printf("Enter Number of Array Elements: ");
	scanf("%d",&Elements);
	
	int *ptr =(int *)malloc(Elements*sizeof(int));
	
	for(int i=0;i<Elements;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&ptr[i]);
	}
		printf("Values after Sorting:\n");
		
		for(int i=0;i<9;i++)
	{
		if(ptr[i]>ptr[i+1])
		{
			swap(&ptr[i],&ptr[i+1]);
			
			i= -1;
		}
	}
	
	
	for(int k=0;k<10;k++)
	{
		printf("%d\n",ptr[k]);
	}
	
}