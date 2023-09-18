#include"stdio.h"


int main(){
	int x=5;
	printf("x before change: %d\n",x);
	int *ptr=&x;
	*ptr=20;
	printf("x after change: %d",x);

	
	return 0;
}