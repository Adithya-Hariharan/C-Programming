//Write a program to print sum of first digit and last digit//

#include <stdio.h>
int main(){
   int no,sum;
   printf("Enter any number: ");
   scanf("%d",&no);
   sum=no%10;
   while(no>9){
      no=no/10;
   }
   sum=sum+no;
   printf("Sum of first and last digit is: %d",sum);
   return 0;
}
