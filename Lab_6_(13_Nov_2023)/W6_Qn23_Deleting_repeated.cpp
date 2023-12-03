// Write a program to remove all repeated characters from a string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n;
	char string[100];
	printf("Enter string: ");
	gets(string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(string[j]==string[i])
			{
				for(k=j;k<n;k++)
				{
					string[k]=string[k+1];
				}
				n--;
			}
		}
	}
	printf("The new string is %s", string);
	
}