// Write a program to print frequency of each character in a given string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,count=1;
	char string[100];
	printf("Enter string: \n");
	gets(string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(string[j]==string[i])
			{
				count+=1;
			}	
		}
		printf("Count of %c is %d\n", string[i], count );
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
		count=1;
	}
// Error when string = "hi bye welcome hello"
}
