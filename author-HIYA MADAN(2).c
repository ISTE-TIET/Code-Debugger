//Pallindrome of a number
#include <stdio.h>
#include<string.h>
void main()
{

    char rev[15];
    char str[15];
    scanf("%[^\n]",str);
    int i,j;
    for(i=strlen(str)-1,j=0;i>=0;i--,j++)
      {rev[j]=str[i];}
    rev[j]='\0';
    if(strcmp(rev,str))
      printf("\nThe string is not a palindrome");
    else
        printf("\nThe string is a palindrome");
   getch();     
}
