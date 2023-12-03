// Write a program to sort the string in ascending order

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	char string[100],temp;
	printf("Enter string: ");
	gets(string);
	len = strlen(string);
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(string[j]>string[j+1])
			{
				temp = string[j];
				string[j]=string[j+1];
				string[j+1]=temp;
			}
		}
	}
	printf("New string: ");
	puts(string);
}