#include "stdio.h"

int main(){
	int num=10,value,flag=0;
	int arr[10]={0};
	for(int i=0;i<10;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter Value to search: ");
	scanf("%d",&value); 
	for(int j=0;j<10;j++)
	{
		if(arr[j]==value){
			flag++;
			printf("value exist at element number: %d\n",j+1);
		
		}
		
		else{}
		
	}
	
	if(flag==0)
		printf("number no exist");
	return 0;
}