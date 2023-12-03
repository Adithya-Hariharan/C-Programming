// Write a C program to print the smallest and largest word in a given string

#include<stdio.h>
#include<string.h>

int main()
{
	int i,n, max=0, min=100;
	char string[100][100], largest[100], smallest[100];

	printf("Enter no. of words: ");
	scanf("%d", &n);
	printf("Enter string of words: \n");
	for(i=0;i<n;i++)
	{
		scanf("%s", string[i]);
		if(strlen(string[i])>max)
		{
			max = strlen(string[i]);
			strcpy(largest, string[i]);
		}	
		if(strlen(string[i])<min)
		{
			min = strlen(string[i]);
			strcpy(smallest, string[i]);
		}
		
    }
    printf("Largest word is %s of length %d", largest, max);
	printf("\nSmallest word is %s of length %d", smallest, min);
    
}