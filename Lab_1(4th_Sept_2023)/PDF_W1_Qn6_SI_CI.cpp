// Write a program to calculate simple and compound interest//

#include<stdio.h>
#include<math.h>
int main()
{
	
	float p, t, r;
	float a,b,c, SI, CI;
	printf("Enter principal value: ");
	scanf("%f", &p);
	printf("Enter time period: ");
	scanf("%f", &t);
	printf("Enter rate of interest: ");
	scanf("%f", &r);
	
	SI = (p*r*t)/100;
	c = 1+(r/100);
	b = pow(c, t);
	a = p*b;
	CI = a-p;
	
	printf("Simple interest: %f", SI);
	printf("\nCompound interest: %f", CI);
	
	
}
