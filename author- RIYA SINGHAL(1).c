
#include <stdio.h>
int main()
{
    int x;
    printf("enter the no. to be divided : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        int y=x/i;
        printf("\n the quotient after dividing '%d' by '%d' is %d",x,i,y);

    return 0;
}
