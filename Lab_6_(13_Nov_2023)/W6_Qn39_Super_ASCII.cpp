// Write a program to print frequency of each character in a given string

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,count=1,b=1,d;
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
		d = string[i]-96;
		if(count!=d)
		{
			b=0;
			printf("No");
			break;
		}
		for(j=i+1;j<n;j++)
		{
			if(string[j]==string[i])
			{
				for(k=j;k<n;k++)
				{
					string[k]=string[k+1];
				}
				n--;
				j--;
			}
		}
		count=1;
	}
	if(b!=0)
	{
		printf("Yes!");
	}
// Error when string = "hi bye welcome hello"
}
