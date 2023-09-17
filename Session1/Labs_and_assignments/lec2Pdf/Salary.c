#include "stdio.h"

int main(){
	
	int hours;
	float ded=0;
		printf("Enter your working hour: ");
		scanf("%d",&hours);
		if(hours>=40)
		{
			printf("Your salary is: %d",50*hours );
		}
		else
		{
			ded=(50*hours)-((50*hours)*0.1);
			printf("Your salary is: %0.3f",ded);
		}

		return 0;
}