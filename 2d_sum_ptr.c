//WAP to cal sum of 2D arrays using pointers
#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 3

int add(int a[M][N])
{
	int *ptr=&a[0][0],sum=0,i,j;
	//for(ptr = &a ; ptr <= &a[M-1][N-1] ; ptr++)
	for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
			sum = sum + *ptr;
			ptr++;
		//	printf("\n%d\n",sum);
		}
	}
	return sum;
//	printf("%d\n",sum);
}

int main(){
	int a[M][N]={2,5,1,3,6,9};
	add(a);
printf("%d",add(a));
}

