#include<stdio.h>
int main()
{
	float phy, chem, bio, maths, cs;
	float per;
	
	printf("Enter marks in phy: ");
	scanf("%f", &phy);
	printf("Enter marks in chem: ");
	scanf("%f", &chem);
	printf("Enter marks in bio: ");
	scanf("%f", &bio);
	printf("Enter marks in maths: ");
	scanf("%f", &maths);
	printf("Enter marks in cs: ");
	scanf("%f", &cs);
	
	per = (phy+chem+bio+maths+cs)/5;
	
	if(per>=90)
		printf("Grade A with percentage of %f", per);
	else if(per>=80)
		printf("Grade B with percentage of %f", per);
	else if(per>=70)
		printf("Grade C with percentage of %f", per);
	else if(per>=60)
		printf("Grade D with percentage of %f", per);
	else if(per>=40)
		printf("Grade E with percentage of %f", per);
	else
		printf("Grade F with percentage of %f", per);		
}
