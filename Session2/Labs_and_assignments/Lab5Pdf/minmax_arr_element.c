#include"stdio.h"

void main(void)
{
	int arr[10];
	int min=100,max=-1;
	
	for(int i=0;i<10;i++)
	{
		printf("please enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		max=(max>arr[i])?max:arr[i];
		min=(min<arr[i])?min:arr[i];
	}
	printf("Max Element: %d\n",max);
	printf("Min Element: %d\n",min);
	
}