// Write a C Program to calculate electricity bill given the number of units as input. Assume any values for sur charge and charge per unit//


#include<stdio.h>
int main()
{
	int units, bill;
	printf("Enter units: ");
	scanf("%d", &units);
	
	if(units<=100)
		bill = units*2;
	else if(100<units && units<=250)
		bill = units*3;
	else
		bill = units*5;
	
	printf("The bill amount is: %d", bill);
		
}
