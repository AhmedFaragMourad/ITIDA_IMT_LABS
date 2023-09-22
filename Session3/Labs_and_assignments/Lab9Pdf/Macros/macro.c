#include"stdio.h"
#include "macros.h"


void main()
{
	int x=1;
	
	printf("SET BIT 1 in x= %d ",x);
	printf("value result= %d\n",SET_BIT(x,1));
	
	
	printf("Clear BIT 1 in x= %d ",x);
	printf("value result= %d\n",CLEAR_BIT(x,1));
	
	
	printf("Toggle BIT 1 in x= %d ",x);
	
	 printf("value result= %d\n",ToGGLE_BIT(x,1));
}