#include <stdio.h>
int isprime(int n)
{
    if (n == 1 )
    {
      return 0;
    }
    if(n == 2){
        return 1;
    }
	int i,f,c =0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{c++;
		break;
		}
	}
	if(c == 0)
	{
		f=1;
	}
	else
	{
		f=0;
	}
	return f;
}
int main()
{
	int num;
	printf(" Enter a natural number : ");
	scanf("%d",&num);
	int r=isprime(num);
	if(r==1)
	printf(" \n%d is prime ",num);
	else
	printf(" \n%d is not prime",num);
}
