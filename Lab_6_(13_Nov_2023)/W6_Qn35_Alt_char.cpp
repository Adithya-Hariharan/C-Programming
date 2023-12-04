//Alternate characters

#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n,c=1;
	char string[100];
	printf("Enter string: ");
	gets(string);
	n = strlen(string);
	for(i=0;i<2;i++)
	{
		for(j=i+2;j<n;j=j+2)
		{
			if(string[j]!=string[i])
			{
				c=0;
				printf("Not alternate");
				break;
			}
		}
		if(c==0)
			break;
	}
	if(c!=0)
	{
		printf("Alternate!");
	}
}