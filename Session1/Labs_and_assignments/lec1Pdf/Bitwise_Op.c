#include "stdio.h"

int main(){
	int number1,number2;
	printf("Please Enter Number 1: ");
	scanf("%d",&number1);
	printf("Please Enter Number 2: ");
	scanf("%d",&number2);
	printf("a&b= %d \n",number1&number2);
	printf("a|b= %d \n",number1|number2);
	printf("a^b= %d \n",number1^number2);
	printf("a>>1= %d \n",number1>>1);
	printf("a<<2= %d \n",number1<<2);
	
	
	return 0;
}