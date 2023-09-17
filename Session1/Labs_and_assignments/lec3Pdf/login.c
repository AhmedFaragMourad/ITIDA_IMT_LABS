#include <stdio.h>
#include "string.h"
int main()
{
	int id,DBpass,pass,tryTimes=3,flag=0;
	char name[10];
	printf("Enter ID: ");
	scanf("%d",&id);
	if(id == 1234 || id == 5678 || id ==9870)
	{
		printf("Please Enter Password: ");
		
	}
	else{
		printf("you are not registered\n");
		return 0;
	}
	
	switch(id)
	{
		case 1234: DBpass=7788;
					strcpy(name,"Ahmed");
		break;
		case 5678: DBpass=5566;
					strcpy(name,"Amr");
		break;
		case 9870: DBpass=1122;
					strcpy(name,"wael");
		break;
	}
	
	
	while(tryTimes--)
	{
		scanf("%d",&pass);
		if(pass==DBpass)
		{
			flag++;
			printf("Welcome %s\n",name);
			break;
		}
		else{
			printf("Enter Password again: ");
		}
			
	}
	
	if(flag==0)
		printf("No more Times");
	return 0;
}