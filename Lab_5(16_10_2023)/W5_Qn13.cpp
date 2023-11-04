//Sum of pairs in array//

#include<stdio.h>
int main()
{
	int i,j,n,s,sum,count=0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n]={};
	printf("Enter values of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);			
	}
	printf("Enter value of sum to be searched: ");
	scanf("%d", &s);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			if(sum==s)
			{
				printf("%d, %d\n", a[i],a[j]);
				count+=1;
			}	
			sum=0;		
		}
		sum=0;
	}
	if(count>0)
	{
		printf("\nTrue");
	}
	else
	{
		printf("False");
	}
}
