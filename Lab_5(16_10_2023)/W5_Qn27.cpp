//to check whether given matrix is identity matrix//

#include<stdio.h>
int main()
{
	int i,j,m,n,c=0,d=0,e=0;
	printf("Enter no. of rows: ");
	scanf("%d", &m);
	printf("Enter no. of columns: ");
	scanf("%d", &n);
	int a[m][n];
	if(m==n)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("a[%d][%d]: ",i,j);
				scanf("%d", &a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				{
					if(a[i][j]==1)
					{
						c=1;
					}
				}
				else
				{
					if(a[i][j]==0)
					{
						d=1;
					}
					else{
						d=0;
					}
				}
			}
		}
	}
	else{
		e=0;
	}
	if(c==1&&d==1&&e==1)
	{
		printf("This matrix is identity matrix");
	}
	else
	{
		printf("This matrix is not identity matrix");
	}
}
