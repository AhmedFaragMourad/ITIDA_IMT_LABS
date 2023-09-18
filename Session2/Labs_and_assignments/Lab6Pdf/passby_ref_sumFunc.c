#include"stdio.h"

int sum(int *n1,int *n2)
{
	return *n1+*n2;
}
int main(){
	int n1,n2;
	printf("Please Enter number 1 : ");
	scanf("%d",&n1);
	printf("Please Enter number 2 : ");
	scanf("%d",&n2);
	printf("The result is: %d",sum(&n1,&n2));
	return 0;
}