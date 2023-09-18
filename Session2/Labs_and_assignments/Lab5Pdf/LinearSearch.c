#include"stdio.h"

void main(void)
{
	int arr[10];
	int findval,CountValue=0;
	for(int i=0;i<10;i++)
	{
		printf("please enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter Value to search for: ");
	scanf("%d",&findval);
	
	for(int i=0;i<10;i++)
	{
		if(arr[i]==findval)
		{
			CountValue++;
		}
	}
	
	if(CountValue)
		printf("Value Exists %d Times",CountValue);
	else
		printf("Value Not Exist");
	
}