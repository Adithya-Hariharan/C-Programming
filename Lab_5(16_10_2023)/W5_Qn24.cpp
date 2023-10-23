// Write a program in C to find transpose of matrix//

#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	int a[m][n] = {};
	int b[n][m] = {};
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value of a[%d][%d]: ", i,j);
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\nb[%d][%d]: %d", i,j,b[i][j]);
		}
	}

		
}
