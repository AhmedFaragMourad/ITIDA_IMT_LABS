#include"stdio.h"
/******************************************************************
Explanation: 

pointer p->holds &x  -> *p=10
*p=*q ->assigning x value to 20
*q=*r ->  y=30
*r=*t-> z=(value of x)=20
*/

	int main(){
		int x=10,y=20,z=30;
		int *p=&x;
		int *q=&y;
		int *r=&z;
		printf("X= %d %d \n Y= %d %d \n Z=%d %d\n",*p,x,*q,y,*r,z);
		printf("Swapping Pointers\n");
		int *t=p;
		*t=*p;
		*p=*q;
		*q=*r;
		*r=*t;
		printf("X= %d %d \n Y= %d %d \n Z=%d %d\n",*p,x,*q,y,*r,z);
		
		
		
		
		return 0;
	}