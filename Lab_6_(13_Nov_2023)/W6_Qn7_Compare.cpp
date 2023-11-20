//Write a C program to compare two strings and find whether they are equal or not//

#include<stdio.h>
#include<string.h>
int main()
{
	char string1[100],string2[100];
	printf("Enter string1: ");
	gets(string1);
	printf("Enter string2: ");
	gets(string2);
	if(strcmp(string1,string2)==0)
	{
		printf("The given two strings are equal");
	}
	else
	{
		printf("The given two strings are not equal");
	}
}
