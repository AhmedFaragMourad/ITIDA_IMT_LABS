#include "stdio.h"

void main(){
	
	int n=3,i=0,max=0;
	int arr[3];
	while(n--)
	{
		printf("Enter Number %d:",i+1);
		scanf("%d",&arr[i]);
		i++;
	}
	
	for(int j=0;j<3;j++)
	{
		max=(max>arr[j])?max:arr[j];
	}
	printf("Max number is: %d",max);
	
}