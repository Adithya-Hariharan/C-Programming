// Converting upper case to lower case//

#include<stdio.h>
int main()
{
	int i;
	char strlo[100];
	printf("Enter value of string: ");
	gets(strlo);
	for(i=0;strlo[i]!='\0';i++)
	{
		if(strlo[i]>=65 && strlo[i]<=90)
		{
			strlo[i]+=32;
		}
	}
	printf("%s", strlo);
}



