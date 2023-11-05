/*Write a program to print the following pattern:
		A
		A B
		A B C
		A B C D
		A B C D E
*/

#include<stdio.h>
int main()
{
	int i,j,n,c=65;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%c ", c+j);
		}
		printf("\n");
		c=65;
	}
}

