#include "stdio.h"

int maxof_4 (int n1,int n2,int n3,int n4)
{
	if(n1>n2 && n1>n3 && n1>n4)
		return n1;
	else if(n2>n1 && n2>n3 && n2>n4)
		return n2;
	else if(n3>n2 && n3>n1 && n3>n4)
		return n3;
	else 
		return n4;
}
int min_4 (int n1,int n2,int n3,int n4)
{
	if(n1<n2 && n1<n3 && n1<n4)
		return n1;
	else if(n2<n1 && n2<n3 && n2<n4)
		return n2;
	else if(n3<n2 && n3<n1 && n3<n4)
		return n3;
	else 
		return n4;
	
}


void main()
{
	int arr[4];
	for(int i=0;i<4;i++)
	{
	printf("Number %d: ",i+1);
	scanf("%d",&arr[i]);
	}
	printf("max number is: %d\n",maxof_4(arr[0],arr[1],arr[2],arr[3]));
	printf("max number is: %d\n",min_4(arr[0],arr[1],arr[2],arr[3]));
}