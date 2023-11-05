//average of x and a[i] belongs to array//

#include<stdio.h>
int main()
{
	int i,j,n,x,count=0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter value of x: ");
	scanf("%d", &x);
	int b[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((x+a[i])/2 == a[j])
			{
				count +=1;
				
			}
			
		}
		b[i]= count;
		count=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", b[i]);
	}
}
