#include "stdio.h"
#define Error 0
int add(int num1,int num2)
{
	return num1+num2;
}

int sub(int num1,int num2)
{
	return num1-num2;
}
int mul (int num1,int num2)
{
	return num1*num2;
}
float div(int num1,int num2)
{
	if(num2==0)
		return Error;
	return ((float)num1/num2);
}
int And(int num1,int num2)
{
	return num1*num2;
}

int OR(int num1,int num2)
{
	return num1|num2;
}
int Not(int num1,int num2)
{
	num1=~num2;
	return num1;
}
int Xor(int num1,int num2)
{
	return num1^num2;
}
int rem(int num1,int num2)
{
	return num1%num2;
}
int increment(int num1)
{
	return num1++;
}
int decrement(int num1)
{
	return num1--;
}

void main()
{
	int flag=0; 
	int number1,id,number2,result;
	printf("enter ID: ");
	scanf("%d",&id);
	if(id>=1 && id<=11)
	{
		printf("Enter operand one: ");
		scanf("%d",&number1);
		printf("Enter operand two: ");
		scanf("%d",&number2);
		switch(id)
		{
			case 1 : result=add(number1,number2);
			break;
			case 2: result=sub(number1,number2);
			break;
			case 3: result=mul(number1,number2);
			break;
			case 4: result=div(number1,number2);
			break;
			case 5: result=And(number1,number2);
			break;
			case 6: result=OR(number1,number2);
			break;
			case 7: result=Not(number1,number2);
			break;
			case 8: result=Xor(number1,number2);
			break;
			case 9: result=rem(number1,number2);
			break;
			case 10: result=increment(number1);
			break;
			case 11: result=decrement(number1);
			break;
		}
	}
	else
		printf("Invalid Operation ID\n");
	
	printf("Result= %d",result);
	
}


