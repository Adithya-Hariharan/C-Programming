/* Write a program for the following pattern
	3
	4 4
	5 5 5 
	6 6 6 6
	6 6 6 6
	5 5 5
	4 4 
	3
*/

#include<stdio.h>
int main(){
	int i,j,n,a;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Enter starting integer: ");
	scanf("%d", &a);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ", a+i);
		}
	printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%d ", (n-i-1)+a);
		}
	printf("\n");
	}
		
}
