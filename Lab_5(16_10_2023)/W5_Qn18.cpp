//sep odd and even integers//

#include<stdio.h>
int main()
{
	int i,j=0,k=0,n,ce=0,co=0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n]={},e[n]={}, o[n]={};
	printf("Enter values of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);	
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j+=1;
			ce+=1;
			}	
		else
		{
			o[k]=a[i];
			k+=1;
			co+=1;
		}
	}
	printf("\nEven integer array: \n");	
	for(i=0;i<ce;i++)
	{
		printf("%d\n", e[i]);
	}

	printf("\nOdd integer array: \n");
	for(i=0;i<co;i++)
	{
		printf("%d\n", o[i]);
	}
		
}
