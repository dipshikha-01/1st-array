
#include<stdio.h>
void main()
{
  int num ,rem,rev=0,copy;
  printf("enter a number : ");
  scanf("%d",&num);
  copy=num ;
  
  do
  {
    rem = num%10;
    rev = rev*10+rem;
    num=num/10; 
  }
   while (num!=0);

   if(copy==rev)
   {
   printf("the number is palindrome.");
   }
   else
   {
    printf("it is not palindrome..");
   }
   
   
  
       
}
