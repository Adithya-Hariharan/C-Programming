//Write a program for printing sum of first N natural numbers//

#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	s+=i;
	printf("%d ",s);

}
