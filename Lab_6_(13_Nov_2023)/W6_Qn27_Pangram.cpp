// Write a C program to check for pangram

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,count=0,d=0;
	char string[100], c='a';
	printf("Enter string: ");
	gets(string);
	strlwr(string);
	n=strlen(string);
	for(i=0;i<26;i++)
	{
		for(j=0;j<n;j++)
		{
			if(string[j]==(c+i))
			{
				count+=1;
			}
		}
		if(count==0)
		{
			printf("Not a pangram");
			break;
		}
		else
		{
			count=0;
			d=1;
		}
		
	}
	if(d==1)
	{
		printf("It is a pangram!");
	}
	
}