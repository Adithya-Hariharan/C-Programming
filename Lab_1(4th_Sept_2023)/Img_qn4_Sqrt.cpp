// Write a C program to find square root of a number//

#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	float sqr;
	printf("Enter number: ");
	scanf("%d", &num);
	
	sqr = sqrt(num);
	printf("The square root of the number is: %f", sqr);
}
