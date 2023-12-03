// Write a C program to print the string after deleting vowels in the string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	char string[100];
	printf("Enter string: ");
	gets(string);
	len = strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U')
		{
			for(j=i;j<len;j++)
			{
				string[j]=string[j+1];
			}
			len--;
		}
	}
	printf("New string: %s", string);
}