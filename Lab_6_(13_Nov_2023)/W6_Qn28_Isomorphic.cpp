// Write a program to check whether two strings are isomorphic

#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n1,n2,c=1;
	char string1[100],string2[100];
	printf("Enter string1: ");
	gets(string1);
	printf("Enter string2: ");
	gets(string2);
	n1 = strlen(string1);
	n2 = strlen(string2);
	if(n1!=n2)
	{
		printf("not isomorphic");
	}
	else
	{
		int diff,d;
		for(i=0;i<n1;i++)
		{
			d=string1[i]-string2[i];
			diff = string1[i]-string2[i];
			for(j=i+1;j<n1;j++)
			{
				if(string1[j]==string1[i])
				{
					diff=d;
				}
				if((string1[j]-string2[j])!=diff)
				{
					c=0;
					printf("Not Isomorphic");
					j=n1;
					i=n1;
				}
			}
		}
	}
	if(c==1)
	{
		printf("Isomorphic!");
	}

}