//Write a program to concat 2 strings without strcat//

#include<stdio.h>
int main()
{
	int i,j,n1,n2;
	printf("Enter length of string 1: ");
	scanf("%d", &n1);
	
	printf("Enter length of string 2: ");
	scanf("%d", &n2);
	
	char str1[n1+n2+1], str2[n2];
	
	printf("Enter string 1: ");
	scanf("%s", str1);
	
	printf("Enter string 2: ");
	scanf("%s", str2);
	

	for(i=0;i<n2;i++)
	{
		str1[n1+i]=str2[i];
	}
	str1[n1+i]='\0';
	printf("Concatenated string: %s", str1);
}
