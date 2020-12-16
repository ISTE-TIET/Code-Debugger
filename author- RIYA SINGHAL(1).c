#include <stdio.h>
int main()
{
    int x,i;
    printf("enter the no. to be divided: ");
    scanf("%d",&x);
    for(i=1;i<=5;i+=1)
    {
        float y=(float)x/i;
        printf("\n the quotient after dividing the given no. by %d is %.2f",i,y);
    }
    return 0;
}
