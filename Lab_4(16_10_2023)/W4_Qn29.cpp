/* Write a program for the following pattern:
		*
 	   --
	  ***
	 ----
	*****
	 ----
	  ***
	   --
	    *
*/

#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			if(i%2==0)
			{
				printf("*");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	for(i=n-1;i>=0;i--)
	{
		for(s=0;s<n-i;s++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			if(i%2==0)
			{
				printf("-");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
