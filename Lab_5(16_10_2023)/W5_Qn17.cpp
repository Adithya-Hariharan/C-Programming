// frequency of each element//

#include<stdio.h>
int main()
{
	int i,j,n,t,s,count=1;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n]={};
	printf("Enter values of array: ");
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
				a[j]= a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i=i+s)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count+=1;
			}			
		}
		s=count;
		printf("\nCount of %d =%d",a[i],count );
		count=1;
		
	}

	
}
	
