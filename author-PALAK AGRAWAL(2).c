#include <stdio.h>
int isprime(int n)
{
	int i,f,c=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
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
	printf("Enter a number:");
	scanf("%d",num);
	int r=isprime(num);
	if(r==0)
	printf("%d is prime",num);
	else
	printf("%d is not prime",num);
	return 0;
}
