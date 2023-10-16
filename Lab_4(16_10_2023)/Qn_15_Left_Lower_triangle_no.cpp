/* Write a program for the following pattern
   1
   22
   333
   4444
   5555
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
			printf("%d",i+1);
		}
	printf("\n");
	}
		
}
