//Reverse first n characters in a file

#include<stdio.h>
int main()
{
	int i=0,j,n;
	char filename[100],c,string[100],temp;
	printf("Enter file name: ");
	gets(filename);
	FILE *fp;
	fp = fopen(filename,"w");
	printf("Enter content: \n");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("The new string is: ");
	fp = fopen(filename,"r");
	while((c=getc(fp))!=EOF)
	{
		string[i]=c;
		i++;
	}
	for(j=0;j<(n+1)/2;j++)
	{
		temp = string[j];
		string[j]=string[n-j];
		string[n-j]=temp;	
	}
	puts(string);

	fclose(fp);
}