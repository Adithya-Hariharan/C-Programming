// Write a C program to count number of words in a string

#include<stdio.h>
int main()
{
	int i,count=1;
	char string[100];
	printf("Enter string: ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
			count++;
	}
	printf("no. of words: %d", count);
}