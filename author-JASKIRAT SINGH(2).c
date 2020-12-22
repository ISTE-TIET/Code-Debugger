#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	for(;i!=0&&i<2;i++) 	//no change should be made in conditions and content of loop!!
	{
		printf("division");
	}
	printf("%d",5/i);
	return 0;
}
