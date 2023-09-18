#include"stdio.h"
void swap(int *ptr1,int *ptr2)
{
	int *t;
	*t=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*t;
}
void main(void)
{
	int arr[10];
	int findval,findflag=0;
	int left,right,mid;
	for(int i=0;i<10;i++)
	{
		printf("please enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	/////sort before search
	for(int i=0;i<9;i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(&arr[i],&arr[i+1]);
			
			i= -1;
		}
	}
	
	
	left=arr[0];
	right=arr[9];
	printf("Enter Value to search for: ");
	scanf("%d",&findval);
	
	while(left<=right)
	{
		mid=left+(right-left)/2;
		if(arr[mid]==findval)
		{
			findflag++;
			break;
		}
		if(arr[mid]<findval)
			left=mid+1;
		else
			right=mid-1;
		
	}
	if(findflag)
		printf("value Exist");
	else 
		printf("value not exist");
	
}