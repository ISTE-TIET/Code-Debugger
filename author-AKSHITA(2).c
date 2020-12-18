#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);
   temp=num;
   while(num!=0)
   {
      remainder=num%10;
      reverse_num=reverse_num*10+remainder;
      num/=10;
  }
   if(temp==reverse_num) 
      printf("%d is a palindrome number",temp);
   else
      printf("%d is not a palindrome number",temp);  
   return 0;
}
