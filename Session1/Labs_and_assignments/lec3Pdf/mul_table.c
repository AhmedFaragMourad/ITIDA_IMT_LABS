#include "stdio.h"

int main(){
	int n; 
	printf("Enter number to display the multiplication table: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		
		printf(" %d * %d = %d\n",n,i,n*i);
		
	}

	

	
	return 0;
}