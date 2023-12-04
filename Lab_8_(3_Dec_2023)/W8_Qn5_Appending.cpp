//Appending of one file in another

#include<stdio.h>
int main()
{
	int i;
	char c1,c2;
	FILE *f1,*f2;
	f1 = fopen("File1","w");
	printf("Enter content of file1: \n");
	while((c1=getchar())!=EOF)
	{
		putc(c1,f1);
	}
	fclose(f1);
	f2= fopen("File2","w");
	printf("Enter content of file2: \n");
	while((c2=getchar())!=EOF)
	{
		putc(c2,f2);
	}
	fclose(f2);
	f1 = fopen("File1","a");
	f2 = fopen("File2", "r");
	while((c2=getc(f2))!=EOF)
	{
		putc(c2,f1);
	}
	fclose(f2);
	fclose(f1);
	printf("After appending of file2 to file1: \n");
	f1 = fopen("File1","r");
	while((c1=getc(f1))!=EOF)
	{
		printf("%c", c1);
	}
	
}