// Find missing number from integers//

#include<stdio.h>
int main()
{
	int i,j,n,t;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n-1]={};
	
	printf("Enter values of array: ");
	
	for(i=0;i<n-1;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-i-2;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=i+1)
		{
			printf("Missing value is %d", i+1);
			break;
		}
	}
	return 0;
}
