//Write a C program to split integers to odd and even integers

#include<stdio.h>

int main()
{
	int i,n,num;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	FILE *fp, *fe, *fo;
	fp = fopen("Data","w");
	for(i=0;i<n;i++)
	{
		scanf("%d", &num);
		putw(num,fp);
	}
	fclose(fp);
	fe = fopen("Even","w");
	fo = fopen("Odd", "w");
	fp = fopen("Data", "r");
	
	while((num=getw(fp))!=EOF)
	{
		if(num%2==0)
		{
			putw(num,fe);
		}
		else
		{
			putw(num,fo);
		}
	}
	fclose(fp);
	fclose(fo);
	fclose(fe);
	printf("Even integers: \n");
	fe = fopen("EVEN","r");
	while((i=getw(fe))!=EOF)
	{
		printf("%d ", i);
	}
	fclose(fe);
	printf("\nOdd integers: \n");
	fo = fopen("Odd", "r");
	while((i=getw(fo))!=EOF)
	{
		printf("%d ", i);
	}
	fclose(fo);
}