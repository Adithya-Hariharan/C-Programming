// Write a C program to perform all arithmetic operations//

#include<stdio.h>
int main()
{
	int a, b, sub, prod, add;
	float div;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	
	add = a+b;
	sub = a-b;
	prod = a*b;
	div = float(a)/b;
	
	printf("The sum of the numbers is: %d", add);
	printf("\nThe difference between the two numbers is: %d", sub);
	printf("\nThe product of the two numbers is: %d", prod);
	printf("\nThe quotient when first number is divided by the second is: %f\n", div);
	
/* 
	To print percentage	
	printf("%%");
	printf("\n%c",37); 		ASCII Code
	
*/
	
}


