#include"stdio.h"


int main(){
	int arr[10]={0};
	int sum=0;
	int *ptr=arr;
	for(int i=0;i<10;i++)
	{
	printf("Please Enter number %d: ",i);
	scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<10;i++)
	{
		sum+=*ptr;
		ptr++;
	}
	
	printf("The Sum of Arr: %d\n",sum);
	
	return 0;
}