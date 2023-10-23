//Write a program to print nth Fibonacci number//

#include <stdio.h>
int main()
{
	int t1=0,t2=1,i,j,n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		i=t1+t2;
		t1=t2;
		t2=i;	
	}
	printf("%d is term number %d in Fibonacci sequence",t1,n);

}
