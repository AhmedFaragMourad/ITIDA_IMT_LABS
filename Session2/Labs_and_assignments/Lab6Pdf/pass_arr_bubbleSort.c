#include"stdio.h"
#define arrSize 10
#define NULL_PTR (void *)0
void swap(int *ptr1,int *ptr2)
{
	 *ptr2=(*ptr1+*ptr2)-(*ptr1=*ptr2);
}
void Sort(int *arr,int length)
{
	for(int i=0;i<length-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(&arr[i],&arr[i+1]);
			i=-1;
		}
		
	}
	
	//return arr;
}
int main(){
	int arr1[10]={0};
	
	
	
	for(int i=0;i<10;i++)
	{
	printf("Please Enter number %d in arr1: ",i);
	scanf("%d",&arr1[i]);
	}
	Sort(arr1,10);
	
	printf("Sorted Arr: \n");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr1[i]);
		//ptr++;
	}
	return 0;
}