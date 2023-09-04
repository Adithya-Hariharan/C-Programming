// Write a C program to find cube of a number//

#include<stdio.h>
#include<math.h>

int main()
{
	int a,c;
	printf("Enter number: ");
	scanf("%d", &a);
	
	c = pow(a,3);
	printf("Cube of number is: %d", c);
	
	
}
