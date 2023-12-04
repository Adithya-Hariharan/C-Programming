// Copy content from one file to another

#include<stdio.h>

int main()
{
	char c;
	FILE *f1,*f2;
	printf("Enter data: ");
	f1 = fopen("Content", "w");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	
	f1 = fopen("Content", "r");
	f2 = fopen("Copy", "w");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f2);
	}
	fclose(f2);
	fclose(f1);
	printf("Data copied in new file.");
	
}