//Write a program to copy string without strcpy//

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[100], str2[100];
	printf("Enter string1: ");
	gets(str1);
	for(i=0;i<strlen(str1);i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("String 2: ");
	puts(str2);
	
}
