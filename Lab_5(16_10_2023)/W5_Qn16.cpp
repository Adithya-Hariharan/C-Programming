//Copy array into another//

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n]={}, b[n]={};
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d", &a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\nb[%d]= %d", i, b[i]);
	}
}
