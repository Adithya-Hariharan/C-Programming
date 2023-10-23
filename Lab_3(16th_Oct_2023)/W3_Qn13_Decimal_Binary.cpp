//Write a program to convert decimal to binary number//

#include<stdio.h>
#include<math.h>
int main()
{
	int n,c=0,r,b=0;
	printf("Enter decimal number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		n/=2;
		b+=r*pow(10,c);
		c+=1;
		}	
	printf("%d",b);
}
