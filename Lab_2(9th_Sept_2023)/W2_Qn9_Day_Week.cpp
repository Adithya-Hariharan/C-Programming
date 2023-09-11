//Write a C program to input day number and print weekday//

#include<stdio.h>
int main()
{
	int n;
	printf("Enter day no.: ");
	scanf("%d", &n);
	
	if(n==1)
		printf("Monday");
	else if(n==2)
		printf("Tuesday");
	else if(n==3)
		printf("Wednesday");
	else if(n==4)
		printf("Thursday");
	else if(n==5)
		printf("Friday");
	else if(n==6)
		printf("Saturday");
	else
		printf("Sunday");		
}
