//Write a C program to capitalize first letters of each word in a given string//

#include<stdio.h>
#include<string.h>
int main()
{
	int i,len;
	char str1[100];
	printf("Enter string: ");
	gets(str1);
	len=strlen(str1);
	str1[0]-=32;
	for(i=1;str1[i]!='\0';i++)
	{
		if(str1[i]==32)
		{
			str1[i+1]-=32;
		}
	}
	printf("Updated string: %s ", str1);
}
