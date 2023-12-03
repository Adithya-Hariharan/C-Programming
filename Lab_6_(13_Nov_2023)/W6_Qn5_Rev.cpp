// Write a program to reverse a string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,n=0;
	char string[100],temp;
	printf("Enter string: ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		n+=1;
	}
	for(i=0;i<(n+1)/2;i++)
	{
		temp = string[i];
		string[i]=string[n-i-1];
		string[n-i-1] = temp;
	}
	printf("Reversed string: ");
	puts(string);
}