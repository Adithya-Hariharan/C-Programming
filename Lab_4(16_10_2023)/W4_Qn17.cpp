/* /* Write a program for the following pattern
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
*/

#include<stdio.h>
int main(){
	int i,j,n,a=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",a);
			a=a+1;
		}
	printf("\n");
	}
		
}
