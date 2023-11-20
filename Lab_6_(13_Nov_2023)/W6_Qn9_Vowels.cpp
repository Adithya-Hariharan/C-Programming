//Write a C program to print vowels in the string//

#include<stdio.h>
int main()
{
	int i;
	char string[100];
	printf("Enter string: ");
	gets(string);
	printf("Vowels inside string: \n");
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==65||string[i]==69||string[i]==73||string[i]==79||string[i]==85||string[i]==97||string[i]==101||string[i]==105||string[i]==111||string[i]==117)
		{
			printf("%c ", string[i]);
		}
	}
}
