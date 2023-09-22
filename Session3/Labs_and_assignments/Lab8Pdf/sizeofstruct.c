#include "stdio.h"

#define student_num 10

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long int u32;
typedef struct {
	
	u16 x;
	u16 z;
	u32 k;
	u32 y;
}mystruct;


void main()
{
	mystruct ahmed;
	printf("Size of struct before modification: %d",sizeof(mystruct));
}