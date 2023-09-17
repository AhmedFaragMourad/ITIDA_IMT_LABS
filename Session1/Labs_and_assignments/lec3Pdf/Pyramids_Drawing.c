#include <stdio.h>
/*
    *
   ***
  ***** 
*/
void main()
{
	int n;
	printf("Enter hieght Number: ");
	scanf("%d",&n);
	for(int row=0;row<n;row++)
	{
		for(int spaces=0;spaces<(n-row);spaces++)
		{
			printf(" ");
		}
		for(int shape=0;shape<(2*row+1);shape++)
		{
			
			printf("*");
		}
		printf("\n");
	}
	
}