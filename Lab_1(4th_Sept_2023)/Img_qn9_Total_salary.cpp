// Write a C program to calculate slary of an employee given the basic salary. Assume values for DA and HRA

#include<stdio.h>
int main()
{
	int bsal;
	float DA, HRA, tsal;
	
	printf("Enter basic salary: ");
	scanf("%d", &bsal);
	
	DA = (bsal/100)*45;
	HRA = (bsal/100)*16;
	tsal = bsal + DA + HRA;
	
	printf("The salary of the employee is: %f", tsal);
}


