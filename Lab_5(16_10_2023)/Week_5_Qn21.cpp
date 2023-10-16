// Write a program in C for a 2D array of size 3*3 and print the matrix//

#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	int a[m][n] = {};
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
			printf("\n%d", a[i][j]);
		}
	}

		
}
