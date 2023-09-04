// Write a C program to Convert kilometer to meter, centimeter, and milimeter//

#include<stdio.h>

int main()
{
	int km, m, cm, mm;
	printf("Enter value in km: ");
	scanf("%d", &km);
	
	m = km*1000;
	cm = m*100;
	mm = cm*10;
	
	printf("The value in metres: %d", m);
	printf("\nThe value in centimetres: %d", cm);
	printf("\nThe value in milimetres: %d", mm);
	
}
