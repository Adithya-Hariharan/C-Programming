//Write a C program to check if 3 numbers are equal or not//

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);
	printf("Enter value of c: ");
	scanf("%d", &c);
	
	if(a==b&&b==c&&c==a)
		printf("The numbers are equal");
	else
		printf("The numbers are not equal");

}
