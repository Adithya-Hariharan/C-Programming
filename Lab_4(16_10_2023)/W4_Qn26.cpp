/* Write a program for the following pattern:
	E
	D E
	C D E
	B C D E
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
			printf("%c ", c+(n-i-1)+j);
		}
		printf("\n");
	}
}
