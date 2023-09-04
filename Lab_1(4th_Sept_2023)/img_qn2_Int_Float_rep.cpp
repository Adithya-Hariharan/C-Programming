// Write a C program to multiply two floating point numbers and printing the output both in Int and Floating point representations//

#include<stdio.h>
int main()
{
	float a,b;
	int prodin;
	float prodfl;
	printf("Enter values of a and b: ");
	scanf("%f %f", &a, &b);
	
	prodin = int(a*b);
	prodfl = a*b;
	
	printf("Int representation: %d", prodin);
	printf("\nFloat representation: %f", prodfl);
	
	
}
