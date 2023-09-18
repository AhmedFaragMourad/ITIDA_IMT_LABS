#include "stdio.h"

int main(){
	int arr[10]={0};
	int sum=0;
	float avg=0;
	printf("Enter 10 Numbers:\n");
	for(int i=0;i<10;i++)
	{
		printf("Number - %d : ",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<10;j++)
	{
		sum+=arr[j];
	}
	printf("Sum of 10 Num = %d\n",sum);
	avg=sum/10.0;
	printf("Average = %f\n",avg);
	return 0;
}