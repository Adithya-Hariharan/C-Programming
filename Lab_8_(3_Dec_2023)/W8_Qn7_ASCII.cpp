//prints ASCII characters

#include<stdio.h>
int main()
{
	int i,j;
	char c;
	printf("Enter to get ASCII value: \n");
	FILE *fp;
	fp = fopen("ASCII","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	fp = fopen("ASCII","r");
	printf("Respective ASCII Values are: \n");
	while((c=getc(fp))!=EOF)
	{
		printf("%d ",c);
	}
	fclose(fp);
}