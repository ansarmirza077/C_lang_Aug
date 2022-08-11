#include<stdio.h>
#define n 5

int main()
{
	int i,j;
	for(i=1;i<=n-1;i++)
	{
		for(j=n;j<=n-i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
