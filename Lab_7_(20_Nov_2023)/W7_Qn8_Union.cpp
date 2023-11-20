//Write a program to create union for a student, read his name, marks and roll no.. Calculate the perentage of 5 subject marks and print it

#include<stdio.h>
union stu{
	char name[50];
	int m[5];
	int rno;
}S1;

int main()
{
	int sum=0;
	float avg;
	printf("Enter name: ");
	gets(S1.name);
	printf("Enter roll no.: ");
	scanf("%d", &S1.rno);
	printf("Enter marks: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d", &S1.m[i]);
		sum+=S1.m[i];
	}
	avg = sum/5.0;
	printf("\nPercentage of student: %f", avg);
}
