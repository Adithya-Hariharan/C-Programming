//Find duplicate elements//

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n]={};
	printf("Enter values of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
			
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ", a[i]);
			}
		}
	}
	
}
