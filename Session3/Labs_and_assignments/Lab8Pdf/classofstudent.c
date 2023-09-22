#include "stdio.h"

#define student_num 10

typedef unsigned char u8;
typedef struct {
	u8 math;
	u8 lang;
	u8 physics;
	u8 chemistry;
}Grade;


void main()
{
	
	Grade arr[student_num];
	int ID;
	// to be easier in implementation consider indx of arr == ID
printf("Build ur own DB: \n");
printf("Each Entry have ID from 0 -> 9: \n");

for(int i=0;i<10;i++)
	{
		printf("Enter Student %d math grade: ",i);
		scanf("%d",&arr[i].math);
		
		printf("Enter Student %d language grade: ",i);
		scanf("%d",&arr[i].lang);
		
		printf("Enter Student %d physics grade: ",i);
		scanf("%d",&arr[i].physics);
		
		printf("Enter Student %d chemistry grade: ",i);
		scanf("%d",&arr[i].chemistry);
		
	}

	
	printf("Enter ID: \n");
	scanf("%d",&ID);
	if(0<ID && ID <10)
	{
			printf("Math Garde: %d\n",arr[ID].math);
			printf("Language Garde: %d\n",arr[ID].lang);
			printf("physics Garde: %d\n",arr[ID].physics);
			printf("chemistry Garde: %d\n",arr[ID].chemistry);
		
	}
	else
	{
		printf("Student ID Not Correct\n");
	}
	
	
	
}