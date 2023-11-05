//no. of distinct absolute values among elements of array//

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,t,s,count=1,c=0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n]={};
	printf("Enter values of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		a[i] = abs(a[i]);		
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
		if(count>=1){
			c+=1;
		
		}
		count=1;
		
	}
	printf("%d",c);	
}
	
