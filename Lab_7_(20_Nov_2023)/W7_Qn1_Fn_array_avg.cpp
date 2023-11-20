// Write a C program to pass array to a function and find the average of given array elements

int avg();
#include<stdio.h>
int main()
{
	int c;
	c=avg();
	printf("Average is: %d", c);
}
int avg()
{
	int i,n,sum=0,average=0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter value of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
		
	}
	average = sum/n;
	
	return average;
}


