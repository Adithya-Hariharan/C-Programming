//balacing arrays//

#include<stdio.h>
int main()
{
	int i,j,n,sum1=0,sum2=0;
	printf("Enter value of n(n should be even): ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);	
	}
	for(i=0;i<n/2;i++)
	{
		sum1+=a[i];
	}
	for(i=n/2;i<n;i++)
	{
		sum2+=a[i];
	}
	if(sum1>sum2)
	{
		printf("The minimum element %d is to be added to the right side", sum1-sum2);
	}
	else
	{
		printf("The minimum element %d is to be added to the left side", sum2-sum1);
	}

}
