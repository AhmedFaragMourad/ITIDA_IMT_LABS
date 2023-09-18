#include"stdio.h" 

int fact(int num)
{
	if(num==1)
		return 1;
	else
		return num*fact(num-1);
	
}


void main()
{
	int number;
	printf("Enter number: ");
	scanf("%d",&number);
	int result= fact(number);
	printf("Factorial of %d = %d",number,result);
	
}