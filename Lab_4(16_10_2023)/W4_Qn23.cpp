/*Write a program for the following pattern

	1111112
	3222222
	3333334
	4444445
	5555556
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<n+1;j++)
			{
				printf("%d ", i+1);
			}
			printf("%d\n", i+2);
		}
		else
		{
			printf("%d ", i+2);
			for(j=0;j<n+1;j++)
			{
				printf("%d ", i+1);
			}
			printf("\n");
		}
	}
}
