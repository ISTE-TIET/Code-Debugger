#include <stdio.h>
int main()
{
	int arr[]={23,45,132,90,345,1,45,8};
	printf(" given array is :");
	for (int x = 0;x < 8; x++){
        printf(" %d ",arr[x]);
	}
	int sum=sum_arr(arr,8);
	printf("\n Sum of the given array is = %d",sum);
	return 0;
}
int sum_arr(int arr[],int n)
{
	int sum = 0;
	int i;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
