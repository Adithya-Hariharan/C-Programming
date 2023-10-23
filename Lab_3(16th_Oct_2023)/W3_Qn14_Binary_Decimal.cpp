//Program to convert binary to decimal number// 

#include<stdio.h>
#include<math.h>
int main()
{
	int n=0,c=0,r,b;
	printf("Enter binary number: ");
	scanf("%d",&b);
	while (b>0)
	{
		r=b%10;
		b/=10;
		n+=r*pow(2,c);
		c+=1;
	}
	printf("%d",n);
}

