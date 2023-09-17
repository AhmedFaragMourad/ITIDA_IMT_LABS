#include "stdio.h"

int main(){
	int num;
		printf("Enter Numbr: ");
		scanf("%d",&num);
		if(num<50)
			printf("Failed");
		else if(num>=50 && num<65)
			printf("Normal");
		else if(num>=65 && num<75)
			printf("Good");
		else if(num >=75 && num<85)
			printf("Very Good");
		else
			printf("Excellent");
		
		
		
			return 0;
}