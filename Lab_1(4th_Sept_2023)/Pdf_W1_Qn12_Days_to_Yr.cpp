// Write a C Program to check whether a given year is leap year or not//

#include<stdio.h>
int main()
{
	int d;
	float y;
	
	printf("Enter no. of days: ");
	scanf("%d", &d);

	y = d/365;
	
	printf("Number of years: %f", y);
}
