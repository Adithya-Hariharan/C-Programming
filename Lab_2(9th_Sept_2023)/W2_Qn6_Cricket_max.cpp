// Write a C program taking 3 numbers as imput, giving maximum value as output//

#include<stdio.h>
int main()
{
	int b1,b2,b3;
	printf("Enter value of b1: ");
	scanf("%d", &b1);
	printf("Enter value of b2: ");
	scanf("%d", &b2);
	printf("Enter value of b3: ");
	scanf("%d", &b3);	
	
	if(b1>b2 && b2>b3)
		printf("b1 has maximum point value of %d", b1);
	else if(b2>b3)
		printf("b2 has maximum point value of %d", b2);
	else
		printf("b3 has maximum point value of %d", b3);
	
}
