// number-invalid; else reverse

#include<stdio.h>
#include<string.h>

int main()
{
	int i,n,c=1;
	char string[100];
	printf("Enter string: ");
	gets(string);
	n = strlen(string);
	for(i=0;i<n;i++)
	{
		if(string[i]>=48 && string[i]<=57)
		{
			printf("Invalid string");
			break;
		}
		else
		{
			c=0;
		}
	}

	strrev(string);
	if(c==0)
	{
		puts(string);
	}

}