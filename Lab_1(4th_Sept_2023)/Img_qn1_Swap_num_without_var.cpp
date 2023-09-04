// Write a C program to swap two numbers without using third variable//

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	printf("value of a: %d", a);
	printf("\nvalue of b: %d", b);
}
