#include "stdio.h"

int main(){
	int n,fact=1; 
	printf("Enter number : ");
	scanf("%d",&n);
	if(n<=0)
		printf("enter valid number\n");
	
	do{
		fact *=n;
		n--;
	}while(n>1);

	printf("Factorial = %d",fact);

	
	return 0;
}