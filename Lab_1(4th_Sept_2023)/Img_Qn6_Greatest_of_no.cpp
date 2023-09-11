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
	
	if(a>b && a>c)
		printf("a is greatest");
	else if(b>c)
		printf("b is greatest");
	else
		printf("c is greatest");
	
}
