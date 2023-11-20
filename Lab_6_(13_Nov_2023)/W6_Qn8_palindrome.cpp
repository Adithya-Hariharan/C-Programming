//Write a C program to find whether the given string is a palindrome//

#include<stdio.h>
#include<string.h>
int main()
{
	int i,len=0;
	char string1[100],string2[100];
	printf("Enter string1: ");
	gets(string1);
	for(i=0;string1[i]!='\0';i++)
	{
		len+=1;
	}
	for(i=0;string1[i]!='\0';i++)
	{
		string2[len-i-1]= string1[i];
	}
	string2[i]= '\0';
	if(strcmp(string1,string2)==0)
	{
		printf("Palindrome!");
	}
	else
	{
		printf("Not a palindrome");
	}
	
	
}
