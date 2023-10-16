//Write a program to find min, max and avg in an unsorted array of integers//

#include<stdio.h>
int main()
{
	int i,n, max=0, min;
	float avg,sum=0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int a[n]={};
	printf("Enter first no. alone ");
	scanf("%d", &a[0]);
	min = a[0];
	sum = sum+a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum = sum+a[i];
		if(a[i]>max)
			max = a[i];
		if(a[i]<min)
			min = a[i];
		}	
	avg = float(sum/n);
	printf("Maximum value is: %d", max);
	printf("\nMinimum value is: %d", min);
	printf("\nAverage value is: %f", avg);
	
	
}
