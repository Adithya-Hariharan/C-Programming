// Write a program in C to find sum of right diagonal elements of matrix//

#include<stdio.h>
int main()
{
	int m,n,i,j,sum=0;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	int a[m][n] = {};
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value of a[%d][%d]: ", i,j);
			scanf("%d", &a[i][j]);
			if(i==n-j-1)
			{
				sum = sum+a[i][j];
			}
	}
}
printf("The sum of left diagonal is: %d", sum);

}
