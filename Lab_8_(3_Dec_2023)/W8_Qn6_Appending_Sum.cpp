//Appending sum of all integers

#include<stdio.h>
int main()
{
	int i,sum=0,n, num,j;
	char c;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	FILE *fp;
	fp = fopen("Sum","w");
	printf("Enter numbers: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &num);
		sum+=num;
		putw(num,fp);
	}
//	fprintf(fp,"\nSum of integers is: ");
	putw(sum,fp);
	fclose(fp);
	fp = fopen("Sum", "r");
	
	while((j=getw(fp))!=EOF)
	{
		printf("%d \n", j);
	}
	fclose(fp);
	
}