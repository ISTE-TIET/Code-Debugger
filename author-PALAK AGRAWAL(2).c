#include <stdio.h>
int isprime(int n)
{
	int i,f,c=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c++; 
	}
	if(c==0)
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
	scanf("%d",&num);
	if(num==1)
	 printf("1 is neither prime nor composite");
	else 
	{int r=isprime(num);
	if(r==1)
	printf("%d is prime",num);
	else
	printf("%d is not prime",num);
   }
}
