// Write a C program to insert a new character in a given string at a given position//

#include<stdio.h>
#include<string.h>
int main()
{
	int pos, i,len;
	char string[100], newc[1];
	printf("Enter string: ");
	gets(string);
	len=strlen(string);
	printf("Enter new character to be inserted: ");
	gets(newc);
	printf("Enter index: ");
	scanf("%d", &pos);
	for(i=len;i>=pos;i--)
	{
		string[i]=string[i-1];
	}
	string[pos-1] = newc[0] ;
	string[len+1]='\0';
	printf("String is: ");
	puts(string);
}
