// Find first non repeating element//

#include<stdio.h>
int main()
{
	int i,j,n,count=0,t;;
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
			if(a[i]==a[j] && count<1)
			{	
				count+=1;
				t=i;
			}
			
		}	
	}
	printf("%d", a[t+1]);
}
