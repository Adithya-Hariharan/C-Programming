// Write a C Program to print first non repeated character from the string

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
		for(j=i;j<n;j++)
		{
			if(string[j]==string[i])
			{
				for(int k=j; k<n;k++ )
				{
					string[k]=string[k+1];
				}
				n--;
			}
		}
	}
	printf("First non repeating character is %c", string[0]);
	
}