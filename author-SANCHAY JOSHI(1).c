#include<stdio.h>

int gcd(int a,int b){
	if(b != 0)
		return gcd(b,a%b);
	else
		return a;
}

int main()
{
	printf("Sanchay Joshi\n");
	int a,b;
	printf("Enter values of a and b \n");
	scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));
	return 0;
}
