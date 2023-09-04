// Write a C program to calculate percentage of student given the marks of 5 different subjects//

#include<stdio.h>
int main()
{
	int m1, m2, m3, m4, m5;
	float per;
	printf("Enter marks of subject 1: ");
	scanf("%d", &m1);
	printf("Enter marks of subject 2: ");
	scanf("%d", &m2);
	printf("Enter marks of subject 3: ");
	scanf("%d", &m3);
	printf("Enter marks of subject 4: ");
	scanf("%d", &m4);
	printf("Enter marks of subject 5: ");
	scanf("%d", &m5);
	
	per = (m1+m2+m3+m4+m5)/5;
	printf("The percentage of the student is: %f", per);

}
