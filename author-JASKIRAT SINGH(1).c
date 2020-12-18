#include<stdio.h>
void transpose(int arr[][10],int n)
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	int k,i,j;
	printf("Enter the order of matrix\n");
	scanf("%d",&k);
	int arr[k][k];
	printf("Enter the elements");
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	transpose(arr,k);
	return 0;
}
