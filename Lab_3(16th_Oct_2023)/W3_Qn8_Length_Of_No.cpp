//Write a program for finding the length of a number//

#include <stdio.h>
int main()
{
	int n,i,len;
	printf("Enter Number: ");
	scanf("%d",&n);
	while (n>0)
	{
		len+=1;
		n=n/10;
	}
	printf("The length of the number is %d",len);

}
