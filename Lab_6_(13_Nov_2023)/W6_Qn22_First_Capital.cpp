// Write a C program to print the first capital letter in a given string

#include<stdio.h>

int main()
{
	int i;
	char string[100];
	printf("Enter value of string: ");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>='A' && string[i]<= 'Z')
		{
			printf("First capital letter is: %c", string[i]);
			break;
		}
	}
}