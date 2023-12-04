// Write a C program to read data from keyboard, write to file INPUT, read data

#include<stdio.h>

int main()
{
	FILE *fp;
	char c;
	printf("Enter data: \n");
	fp = fopen("INPUT","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	fp = fopen("INPUT","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}