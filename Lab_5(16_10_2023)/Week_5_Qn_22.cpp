// Write a program in C for a 2D array of size 3*3 and print the matrix//

#include<stdio.h>
int main()
{
	int ar,ac,br,bc,i,j;
	printf("For matrix A");
	printf("\nEnter no. of rows: ");
	scanf("%d", &ar);
	printf("Enter no. of columns: ");
	scanf("%d", &ac);
	int a[ar][ac] = {};
	for(i=0; i<ar; i++)
	{
		for(j=0;j<ac;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("For matrix B");
	printf("\nEnter no. of rows: ");
	scanf("%d", &br);
	printf("Enter no. of columns: ");
	scanf("%d", &bc);
	int b[br][bc] = {};
	for(i=0; i<br; i++)
	{
		for(j=0;j<bc;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	if((ar==br) && (ac == bc))
		{
			int c[ar][ac] = {};
			int d[ar][ac] = {};
			for(i=0;i<ar;i++)
				for(j=0;j<ac;j++)
				{
					c[i][j] = a[i][j] + b[i][j];
					d[i][j] = a[i][j] - b[i][j];
			}
			printf("Sum: \n" );
			for(i=0;i<ar;i++)
				for(j=0;j<ac;j++)

					printf("%d ", c[i][j]);
			printf("\nDifference: \n" );
			for(i=0;i<ar;i++)
				for(j=0;j<ac;j++)

					printf("%d ", d[i][j]);
					
		}
	else{
		printf("Matrices cannot be added/ subtracted");		

	}
		
	


		
}
