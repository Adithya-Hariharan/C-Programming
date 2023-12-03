// Write a C program to sort the characters in a string in lexicographical order

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char string[100][100], temp[100];
	
	printf("Enter number of words: ");
	scanf("%d", &n);

	printf("Enter String: \n");
	for(i=0;i<n;i++)
	{
		scanf("%s", &string[i] );
	}
	
	for(i=0; i<n-1 ;i++)
	{
		for(j=0; j<n-i-1 ;j++)
		{
		if(strcmp(strlwr(string[j]),strlwr(string[j+1]))>0)
		{
			strcpy(temp, string[j]);
			strcpy(string[j],string[j+1]);
			strcpy(string[j+1],temp);
		}                 
	}        
	}
	printf("The new string: \n");
	for(i=0;i<n;i++)
	{
		printf("%s ", string[i]);
	}
}

