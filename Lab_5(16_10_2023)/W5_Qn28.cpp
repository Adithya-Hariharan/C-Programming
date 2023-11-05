//finding ceiling of element in an array//

#include<stdio.h>
int main()
{
	int i,j,n,t,x;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Enter value of x: ");
	scanf("%d", &x);
	for(i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			printf("Ceil of %d is %d",x,a[i]);
			break;
		}
	}
}
