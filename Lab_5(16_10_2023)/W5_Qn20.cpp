//insert value at a particular index//

#include<stdio.h>
int main()
{
	int i,j,n,t,v,ind;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n+1]={};
	printf("Enter values of array: ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);			
	}
	printf("Enter value to be inserted: ");
	scanf("%d", &v);
	printf("Enter position: ");
	scanf("%d", &ind);
	for(i=ind-1; i<n+1; i++)
	{
		a[n+1-i]=a[n-i];			
	}
	a[ind-1]=v;
	
	for(i=0;i<n+1;i++)
	{
		printf("%d ", a[i]);
	}
	
}
