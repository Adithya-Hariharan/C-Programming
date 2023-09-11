#include<stdio.h>
int main()
{
	int bsal, tier;
	float DA, HRA, tsal, TA;
	
	printf("Enter basic salary: ");
	scanf("%d", &bsal);
	
	DA = (bsal/100)*44;
	TA = (bsal/100)*8;
	
	printf("Enter tier: ");
	scanf("%d", &tier);
	
	if(tier==1)
		HRA = (bsal/100)*24;
	else if(tier ==2)
		HRA = (bsal/100)*16;
	else
		printf("invalid tier");

	tsal = bsal + DA + HRA + TA;
	
	printf("The salary of the employee is: %f", tsal);
}


