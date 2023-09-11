//Write a C program to input sides of a triangle and check whether a traingle is equilateral, scalene or isosceles//

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter value of side a: ");
	scanf("%d", &a);
	printf("Enter value of side b: ");
	scanf("%d", &b);
	printf("Enter value of side c: ");
	scanf("%d", &c);
	
	if(a==b&&b==c&&c==a)
		printf("Equilateral triangle");
		
	else if(a==b||b==c||c==a)
		printf("Isosceles triangle");
		
	else
		printf("Scalene triangle");
}
