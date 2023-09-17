#include "stdio.h"

int main(){
	int num;
		printf("Enter Numbr: ");
		scanf("%d",&num);
		switch(num)
		{
			case 1234: printf("Welcome Ahmed");
			break;
			case 5678: printf("Welcome Youssef");
			break;
			case 1145: printf("welcome Mina");
			break;
			default : printf("wrong ID");
		}
		
		return 0;
}