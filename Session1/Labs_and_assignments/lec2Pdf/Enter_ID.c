#include "stdio.h"
#define Pass 1
void main(){
	int id;
	int password;
	printf("Please Enter your ID: ");
	scanf("%d",&id);
	if(id>0 && id<1000)
	{
		printf("Please Enter Password: ");
		scanf("%d",&password);
		if(password==Pass)
		{
			printf("user name: ahmed \n");
			
		}
		else{
			printf("Incorrect Password");
		}
	}
	else
	{
		printf("Incorrect ID");
	}
	
	
}