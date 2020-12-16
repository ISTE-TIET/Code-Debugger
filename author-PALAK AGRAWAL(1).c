#include <stdio.h>
int main()
{
	int arr={23,45,132,90,345,1,45,8};
	int sum=sum_arr(arr,8);
	printf("Sum=%d",sum);	
	return 0;
}
int sum_arr(int arr[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
