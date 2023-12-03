// Write a program to remove all white spaces from a given string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char string[100];
	printf("Enter string: ");
	gets(string);
	n = strlen(string);
	for(i=0;i<n;i++)
	{
		if(string[i]==' ')
		{
			for(j=i;j<n;j++)
			{
				string[j]=string[j+1];
			}
			n--;
			i--;
		}
	}
	printf("New string is %s", string);
	
}