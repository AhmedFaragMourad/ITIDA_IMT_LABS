#include"stdio.h"

void main(void)
{
	int class [3][10]={{0}};
	int min=100,max=-1,sum_grade=0;
	 float Avg_grade;
	int pass=0,fails=0;
	for(int j=0;j<3;j++){
	for(int i=0;i<10;i++)
	{
		printf("Enter Student %d at Class %d grade: ",i,j);
		scanf("%d",&class[j][i]);
		
	}
	}
	//max and min 
	for(int i=0;i<3;i++){
	for(int j=0;j<10;j++)
	{
		sum_grade+=class[i][j];
		max=(max>class[i][j])?max:class[i][j];
		min=(min<class[i][j])?min:class[i][j];
	}
	printf("Max Grade: %d For Class %d\n",max,i);
	printf("Min Grade: %d For Class %d\n",min,i);
	Avg_grade=sum_grade/10.0;
	printf("Average Grade: %f For class %d\n",Avg_grade,i);
	Avg_grade=0;
	sum_grade=0;
	
	}
	//number of fails and pass
	for(int h=0;h<3;h++){
	for(int k=0;k<10;k++)
	{
		if(class[h][k]>=50)
		{
			pass++;
		}
		else
			fails++;
	}
	}
	//avg cal
	/*
	to print avg & max&min for all 3 classes
	
	*/
	printf("Num of Passed: %d\n",pass);
	printf("Num of failed: %d\n",fails);
	//printf("Max Grade: %d\n",max);
	//printf("Min Grade: %d\n",min);
	//printf("Average Grade: %d\n",Avg_grade);
	
}