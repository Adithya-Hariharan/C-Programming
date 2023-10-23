/* Write a program for the following pattern
	1
	2*2
	3*3*3
	4*4*4*4
	4*4*4*4
	3*3*3
	2*2
	1
*/

#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d", i+1);
			if(j<i)
				printf("*");
		}
	printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d", n-i);
			if(j<n-i-1)
				printf("*");
		}
	printf("\n");
	}
		
}
