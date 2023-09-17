#include "stdio.h"

int main(){
	int n1,n2;
	printf("enter num1: ");
	scanf("%d",&n1);
	printf("enter num2: ");
		scanf("%d",&n2);
		
		
		if(n1>n2 )
		{
			printf("Maximum is : %d\n",n1);
		}
		
		
		else{
			printf("Maximum is : %d\n",n2);
		}
		
		printf("sum= %d\n",n1+n2);
		printf("sub= %d\n",n1-n2);
		printf("and= %d\n",n1&n2);
		printf("or= %d\n",n1|n2);
		printf("xor= %d\n",n1^n2);
		return 0;
}
		