/* Write a program for the following pattern:
	A
	BB
	CCC
	DDDD
	EEEEE
*/

#include<stdio.h>
int main()
{
	int i,j,n,c=65;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%c",c+i);
		}
		printf("\n");
	}
}
