// Write a C program to find most and least repeated characters in a given string//

#include<stdio.h>
int main()
{
	int i,j,mini=100,maxi=0,count;
	char str[100], max[1], min[1];
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				count+=1;
			}
		}
		if(count>maxi)
		{
			maxi=count;
			max[0] = str[i];
			
		}
		if(count<mini)
		{
			mini = count;
			min[0] = str[i];
		}
		
	}
	printf("Most repeated character is: %c", max[0]);
	printf("\nLeast repeated character is %c", min[0]);
	
}
