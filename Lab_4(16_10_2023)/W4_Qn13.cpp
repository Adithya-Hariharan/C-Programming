/*Write a program for the following pattern

	*		 *
	**		**
	***    ***
	****  ****
	**********
	**********
	****  ****
	***	   ***
	**	    **
	*		 *
	
*/



#include<stdio.h>
int main()
{
	int n,i,j,s;; 
	printf("Enter value of n: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
			printf("*");
		for (s=0;s<(2*(n-i-1));s++)
			printf(" ");
		for (j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
			printf("*");
		for (s=0;s<2*i;s++)
			printf(" ");
		for (j=0;j<n-i;j++)
			printf("*");
		printf("\n");
	}
}
