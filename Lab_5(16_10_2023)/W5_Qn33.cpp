//print average or mean of stream at every point//

#include<stdio.h>
int main()
{
	int i,j,n,sum=0,avg;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		sum+=a[i];
		avg = sum/(i+1);
		printf("%d ", avg);
	}
	
}
