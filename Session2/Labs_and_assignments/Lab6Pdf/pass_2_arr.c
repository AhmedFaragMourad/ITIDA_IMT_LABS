#include"stdio.h"
#define arrSize 10
/////______________ Assume arr1 & arr2 with same length
int mul(int *arr1,int *arr2)
{
	int mul=0;
	for(int i=0;i<arrSize;i++)
	{
		mul+=(arr1[i]*arr2[i]);
	}
	return mul;
}

int main(){
	int arr1[10]={0};
	int arr2[10]={0};
	
	
	for(int i=0;i<10;i++)
	{
	printf("Please Enter number %d in arr1: ",i);
	scanf("%d",&arr1[i]);
	}
	
	for(int i=0;i<10;i++)
	{
	printf("Please Enter number %d in arr2: ",i);
	scanf("%d",&arr2[i]);
	}
	
	printf("result = %d\n",mul(arr1,arr2));
	
	return 0;
}