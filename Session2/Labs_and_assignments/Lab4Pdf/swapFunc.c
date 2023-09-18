#include"stdio.h" 
int x=0,y=0;

void swap(int n1,int n2)
{
	n1=(n1+n2)-(n2=n1);
	
	printf("after swap x= %d\n",n1);
	printf("after swap y= %d\n",n2);
}

void main()
{
	
	printf("x before swap: ");
	scanf("%d",&x);
	printf("y before swap: ");
	scanf("%d",&y);
	swap(x,y);
}