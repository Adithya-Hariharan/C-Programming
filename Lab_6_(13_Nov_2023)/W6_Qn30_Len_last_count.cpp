// Length of last word and count

#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0,n=0,last=0;
	char string[100];
	printf("Enter string: ");
	gets(string);
	for(i=0;i<n;i++)
	{
		if(string[i]==' ')
		{
			n++;
		}
	}
	for(i=n-1;i>=0;i++)
	{
		last++;
		if(string[i]==' ')
		{
			break;
		}
	}
	int c=-1;
	printf("%d", n);
	if(n==0)
	{
		printf("%d", c);
	}
	else
	{
		printf("Length of last word is %d", last);
	}
	
}


/*int main()
{
	int i=0,j,n=0,last;
	char string[100][100];
	printf("Enter string of words with lower and uppercase alphabets: ");
	do{
		scanf("%s", string[i]);
		i++;
		n++;
	}while(string[i][0]!='\0');
	
	last = strlen(string[n-1]);
	printf("%d",n);
	if(n==0)
	{
		printf("%d", -1);
	}
	else
	{
		printf("Length of last word is %d", last);
}
	
}

*/