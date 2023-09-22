#include "stdio.h"

#define employee_number 3

/***** Data Types ****/
typedef unsigned short u16;


typedef struct {
	u16 salary;
	u16 bonuce;
	u16 deduction;
}employee;

int main()
{
	int t;
int	SalarySum=0,BonuceSum=0,DeductionSum=0;
	
	char str[10];
	employee arr[employee_number];//Array of struct 
	
	for(int i=0;i<employee_number;i++){
	printf("Enter Employee Name: ");
	scanf("%s",str);
	
		printf("Enter %s Salary: ",str);
		scanf("%d",&arr[i].salary);
		SalarySum+=arr[i].salary;
		printf("Enter %s Bonuce: ",str);
		scanf("%d",&arr[i].bonuce);
		BonuceSum+=arr[i].bonuce;
		printf("Enter %s Deduction: ",str);
		scanf("%d",&arr[i].deduction);
		DeductionSum+=arr[i].deduction;
	}
	printf("Total value needed: %d",(SalarySum+BonuceSum)-DeductionSum);
	
}