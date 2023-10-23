//Write a program for printing odd numbers from 1 to N//


#include <stdio.h>
int main()
{
	int n,o;
	printf("Enter number: ");
	scanf("%d",&n);
	for (o=1;o<=n;o+=2)
	printf("%d ",o);
}
