// Write a C program to swap 2 numbers//

#include<stdio.h>
int main()
{
	int a,b, temp;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	
	printf("\nThe original value of a is: %d", a);
	printf("\nThe original value of b is: %d", b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\nThe swapped value of a is: %d", a);
	printf("\nThe swapped value of b is: %d", b);
}


