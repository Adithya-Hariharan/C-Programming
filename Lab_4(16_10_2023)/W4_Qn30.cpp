/* Write a program for the following pattern:
	*-------*
	 *-----*
	  *---*
	   *-*
	    *
*/

#include<stdio.h>
int main()
{
	int i,j,n,h,s;
	printf("Enter value of n: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		{
			printf(" ");
		}
		printf("*");
		for(j=0;j<2*(n-i)-3;j++)
		{
			printf("-");
		}
		if(i!=n-1)
		{
			printf("*");
		}
		printf("\n");
	}
}
