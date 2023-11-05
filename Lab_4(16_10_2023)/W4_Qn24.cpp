/* Write a program for the following pattern:
	1  2  3  4  5 
	16 17 18 19 6
	15 24 25 20 7
	14 23 22 21 8
	13 12 11 10 9
*/

#include<stdio.h>
int main()
{
	int i,j,k=1,n,p,q,r,s;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n][n];
	for(i=0;i<(n+1)/2;i++)
	{
		for(p=i;p<n-i;p++)
		{
			a[i][p] = k;
			k++;
		}
		
		for(q=i+1;q<n-i;q++)
		{
			a[q][n-i-1] = k;
			k++;
		}
		
		for(r=n-i-2;r>=i;r--)
		{
			a[n-i-1][r] = k;
			k++;
		}
		
		for(s=n-i-2;s>i;s--)
		{
			a[s][i] = k;
			k++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
