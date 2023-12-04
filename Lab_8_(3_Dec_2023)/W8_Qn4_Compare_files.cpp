// Compare two files

#include<stdio.h>

int main()
{
	int i=1;
	char c1,c2;
	FILE *f1, *f2;
	f1 = fopen("File1","w");
	f2 = fopen("File2","w");
	printf("Enter data for file1: \n");
	while((c1=getchar())!=EOF)
	{
		putc(c1,f1);
	}
	fclose(f1);
	printf("Enter data for file2: \n");
	while((c2=getchar())!=EOF)
	{
		putc(c2,f2);
	}
	fclose(f2);
	f1 = fopen("File1","r");
	f2 = fopen("File2","r");
	while((c1=getc(f1))!=EOF && ((c2=getc(f2)))!=EOF)
	{
		if(c1!=c2)
		{
			i=0;
			printf("Not equal");
			break;
		}

	}
	if(i==1)
	{
		printf("Files are equal!");
	}
}