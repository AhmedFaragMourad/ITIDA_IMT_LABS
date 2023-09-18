#include "stdio.h"

int getmax(int num1,int num2)
{
	return (num1>num2)?num1:num2;
}
int main()
{
	int n1,n2;
	
	printf("Enter values: ");
	scanf("%d",&n1);
	printf("Enter values: ");
	scanf("%d",&n2);
	printf("max is %d",getmax(n1,n2));
	
}