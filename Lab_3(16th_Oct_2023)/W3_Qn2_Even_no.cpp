//Write a program for printing even numbers from 1 to N//

#include <stdio.h>
int main()
{
	int n,e;
	printf("Enter Number: ");
	scanf("%d",&n);
	for (e=2;e<=n;e+=2)
	printf("%d ",e);

}
