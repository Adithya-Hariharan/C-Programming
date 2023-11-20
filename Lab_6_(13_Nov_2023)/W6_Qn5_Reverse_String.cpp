//Write a C program to reverse a string without using string functions//

#include<stdio.h>
int main()
{
	int i,len=0;
	char string1[100], string2[100];
	printf("Enter string1: ");
	gets(string1);
	for(i=0;string1[i]!='\0';i++)
	{
		len+=1;
	}
	for(i=0;string1[i]!='\0';i++)
	{
		string2[len-i-1]=string1[i];
	}
	string2[i]='\0';
	printf("Reversed string: ");
	puts(string2);
}
