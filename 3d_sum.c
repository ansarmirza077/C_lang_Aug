//WAP to cal sum of 3D arrays
#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 3
#define O 3

int add(int a[M][N][O])
{
	int i,j,k,sum=0;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			for(k=0;k<O;k++)
			sum = sum + a[i][j][k];
		}
	}
	return sum;
	}

int main(){
	int a[M][N][O]={2,5,1,3,6,9,7,5,3};
	add(a);
	printf("%d",add(a));
}

