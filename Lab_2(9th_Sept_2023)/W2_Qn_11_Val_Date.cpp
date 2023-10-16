// Program to check if a given date is valid or not//

#include<stdio.h>
int main()
{
	int day,month,year,d,c;
	printf("Enter day number: ");
	scanf("%d", &day);
	printf("Enter month number: ");
	scanf("%d", &month);
	printf("Enter year number: ");
	scanf("%d", &year);
	if(month<1 || month>12)
		c=0;
	else if((year%4==0)&&(year%100!=0||year%400==0))
		
		{
			if(month==2)
				d=29;
			else if(month==1||month==3||month==5|month==7||month==8|month==10||month==12)
				d=31;
			else
				d=30;
		}
	else
	
		{
			if(month==2)
				d=28;
			else if(month==1||month==3||month==5|month==7||month==8|month==10||month==12)
				d=31;
			else
				d=30;
		}
	if(day<=0||day>d)
		c=0;
	else
		c=1;
	
	if(c!=0)
	{
		if(day==d && month==12)
			printf("%d %d %d", (day+1-d),(month-11),(year+1));
		else if(day==d && month!=12)
			printf("%d %d %d", (day+1), month, year);
		else
			printf("%d %d %d", (day+1),month, year);	
		}	
	else
		printf("Invalid Input");
		
}
