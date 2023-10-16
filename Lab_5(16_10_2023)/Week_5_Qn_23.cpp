// Write a program for multiplication of two matrices//

#include<stdio.h>
int main()
{
	int ar,br,i,j,k;
	printf("For matrix A");
	printf("\nEnter no. of rows/columns: ");
	scanf("%d", &ar);
	int a[ar][ar] = {};
	for(i=0; i<ar; i++)
	{
		for(j=0;j<ar;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("For matrix B");
	printf("\nEnter no. of rows/columns: ");
	scanf("%d", &br);
	int b[br][br] = {};
	for(i=0; i<br; i++)
	{
		for(j=0;j<br;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	if(ar==br)
		{
		int c[ar][ar] = {};
		for(i=0;i<ar;i++)
			for(j=0;j<ar;j++)
				for(k=0;k<ar;k++)
					c[i][j] += a[i][k] * b[k][j];
		printf("The product of two matrices: \n");
		for(i=0;i<ar;i++)
			for(j=0;j<ar;j++)
				printf("%d ", c[i][j]);
			}
	else
		printf("Can't multiply the matrices");
	

}


