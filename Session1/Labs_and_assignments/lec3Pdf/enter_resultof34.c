#include "stdio.h"

int main(){
	int n; 
	printf("Enter result of 3*4= ");
	scanf("%d",&n);
	while (n != 12)
	{
		printf("Not Correct: please try again : ");
		scanf("%d",&n);
	}
	
	printf("Thank you");
	
	return 0;
}