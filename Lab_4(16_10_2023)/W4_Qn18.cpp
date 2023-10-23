/* Write a program for the following pattern
		1
	   2 2
	  3 3 3
	 4 4 4 4
	5 5 5 5 5
*/


#include<stdio.h>
int main(){
	int i,j,n,s;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		{
			printf(" ");
		}
		for(j=0;j<(i+1);j++)
		{
			printf("%d",i+1);
			printf(" ");
		}
	printf("\n");
	}
		
}
