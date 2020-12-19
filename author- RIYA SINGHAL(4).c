
#include <stdio.h>

int main()
{
    int x = 10;
    for(int i=0;i<5;i+=1)//INFINITE LOOP
    {
        int x=9;
        printf("the value of x variable is %d\n",x);

    }
    char ch;//ALREADY DECLARED ABOVE
    printf("enter any character ");
    scanf("%c",&ch);
    printf("the entered character is %c",ch);
    return 0;
}
