//Write a C program to print number of days in a month by taking year and month numbers as input//

#include<stdio.h>
int main()
{
	int y,month,d;
	
	printf("Enter the year: ");
	scanf("%d", &y);
	printf("Enter the month number: ");
	scanf("%d", &month);
	
	if (y%4==0 && (y%100!=0||y%400==0))
		{
		if(month == 2)
			printf("Number of days = 29");
	}
		
	else
		{
		
		if(month==2)
			printf("Number of days = 28");
	}
			
	
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		printf("Number of days = 31");
	else if(month==4||month==6||month==9||month==11)
		printf("Number of days = 30");
}
