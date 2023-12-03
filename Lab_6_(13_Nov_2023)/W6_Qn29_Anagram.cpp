//Write a c program to check for anagram

#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n1,n2,c=1;
	char string1[100], string2[100];
	printf("Enter string1: ");
	gets(string1);
	printf("Enter string2: ");
	gets(string2);
	n1 = strlen(string1);
	n2=strlen(string2);
	if(n1!=n2)
	{
		printf("Not anagram");
	}
	else
	{
		int count=0;
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n1;j++)
			{
				if(string1[i]==string2[j])
				{
					count++;
				}
			}
			if(count=0)
			{
				c=0;
				printf("Not anagram");
				break;
			}
			count=0;
		}
		if(c=1)
		{
			printf("anagram!");
		}
		
	}
}