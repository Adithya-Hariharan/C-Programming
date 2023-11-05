//sum of 2 no.s using arrays//

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,M,N,num1=0,num2=0,sum;
	printf("Enter value of N: ");
	scanf("%d", &N);
	int a[N];
	printf("Enter value of M: ");
	scanf("%d", &M);
	int b[M];
	printf("Enter array A: ");
	for(i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
		num1 += a[i]*pow(10,N-i-1);
	}
	printf("Enter array B: ");
	for(i=0;i<M;i++)
	{
		scanf("%d", &b[i]);
		num2 += b[i]*pow(10,M-i-1);
	}
	sum = num1+num2;
	printf("Sum of two no.s is: %d", sum);
	
}
