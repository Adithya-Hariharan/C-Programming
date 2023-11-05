// Sum of pair divisible by k//

#include<stdio.h>
int main()
{
	int i,j,n,c=1,k;
	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("Enter value of array: ");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter value of k: ");
	scanf("%d", &k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])%k != 0)
			{
				c=0;
				break;
			}
			else
			{
				continue;
			}
		}
	}
	if(c==0){
		printf("False");
	}
	else{
		printf("True");
	}

}
