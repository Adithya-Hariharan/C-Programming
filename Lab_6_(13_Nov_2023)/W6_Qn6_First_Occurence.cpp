// Write a C program to print the first occurence of the character in the given string without using strchr//

#include<stdio.h>
int main()
{
	int i,c=1;
	char string1[100], find1[1];
	printf("Enter string1: ");
	gets(string1);
	printf("Enter character to be found in string1: ");
	gets(find1);
	for(i=0;string1[i]!='\0';i++)
	{
		if(string1[i]==find1[0])
		{
			printf("Character first found at %d", i);
			break;
		}
		else
		{
			c=0;
		}
		
	}
	if(c=0)
	{
		printf("Character not found in the string");
	}
}
