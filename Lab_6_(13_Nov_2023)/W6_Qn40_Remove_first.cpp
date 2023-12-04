//Remove char from first string that are present in the second

#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,n1,n2;
	char string1[100], string2[100];
	printf("Enter string1: ");
	gets(string1);
	printf("Enter string2: ");
	gets(string2);
	n1 = strlen(string1);
	n2 = strlen(string2);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(string1[i]==string2[j])
			{
				for(k=i;k<n1;k++)
				{
					string1[k]=string1[k+1];
				}
				n1--;
			}
		}
	}
	printf("%s", string1);
}