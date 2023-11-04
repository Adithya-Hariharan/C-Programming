#include<stdio.h>
int main()
{
	int i,j,t,n,e;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n+1]={};
	printf("Enter values of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);		
	}
	printf("Enter value to be inserted: ");
	scanf("%d",&e);
	a[n]=e;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	for(i=0;i<n+1;i++)
	{
		printf("\n%d", a[i]);
	}
}
