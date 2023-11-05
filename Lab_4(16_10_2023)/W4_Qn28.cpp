/* Write a program for the following pattern: 
	AAAAA
	BBBB
	CCC
	DD
	E
*/

#include<stdio.h>
int main()
{
	int i,j,n,c=65;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%c", c+i);
		}
		printf("\n");
	}
}
