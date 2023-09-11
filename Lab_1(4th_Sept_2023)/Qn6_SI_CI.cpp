// Write a program to calculate simple and compound interest//

#include<stdio.h>
#include<math.h>
int main()
{
	
	int p, t, r;
	float a,b,SI, CI;
	printf("Enter principal value: ");
	scanf("%d", &p);
	printf("Enter time period: ");
	scanf("%d", &t);
	printf("Enter rate of interest: ");
	scanf("%d", &r);
	
	SI = (p*r*t)/100;
	
	b = pow((1+ r/100), t);
	a = p*b;
	CI = a-p;
	
	printf("Simple interest: %f", SI);
	printf("\nCompound interest: %f", CI);
	
	
}
