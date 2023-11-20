// Write a c program to find length of string without strlen//

#include<stdio.h>
int main()
{
	int len=0,i=0;
	char string[100];
	printf("Enter string: ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		len+=1;
	}

	printf("The length of the string is: %d", len);
}
