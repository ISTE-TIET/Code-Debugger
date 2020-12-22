/*A string is entered (For example: My name is jessie.)
Here is C program to get its reverse in a column as output i.e.:
jessie
is
name
My
Debug the following program to get the desired output.
*/
#include<stdio.h>
void main()
{
char str[20];
char *ptr=str,*temp;
int i=0,j;
scanf("%[^\n]",str);
while(*ptr)
{
i++;
ptr++;
}
for(j=0;j < i; j++)
{
            if(*ptr==' ')
            {
                  temp=ptr;
                  ptr--;
                  temp++;
                  while((*temp!=' ')&&(*temp!='\0'))
                  {
                       printf("%c",*temp);
                        temp++;
                  }
                  printf("\n");
            }
            else
            {
                  ptr--;
            }
}
while(*ptr!=' ')
{
printf("%c",*ptr);
ptr++;
}
getch();
}

