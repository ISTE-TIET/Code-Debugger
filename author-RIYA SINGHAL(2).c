
#include <stdio.h>
int main()
{
    int x,y,i;
    printf("enter the no. to be divided");
    scanf("%d",&x);
    for(i=1;i<=5;i+=1)
    {
        y=x+i;
        printf("\n the sum of given number with %d is %d",i,y);
    }
    return 0;
}
