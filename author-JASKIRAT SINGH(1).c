#include<stdio.h>

void transpose(int arr[100][100],int n)
{
	int tra[n][n],i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			tra[i][j]=arr[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=tra[i][j];
		}
	}
	
}
int main()
{
	int n,i,j;
	printf("Enter the order of matrix\n");
	scanf("%d",&n);
	int arr[100][100];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	transpose(arr,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
