//WAP to cal sum of 3D arrays using pointers
#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 3
#define O 3  

int add(int a[M][N][O])// means 2 matrices of 3x3
{
	int *ptr= &a[0][0][0],sum=0,i,j,k;
	//for(ptr = &a ; ptr <= &a[M-1][N-1] ; ptr++)
	for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
			for(k=0;k<O;k++)
			{
			sum = sum + *ptr;
			ptr++;
		//	printf("\n%d\n",sum);
		}
	}
	
//	printf("%d\n",sum); if prints here skips first loop gets incomplete addition
}
	return sum;
}

int main(){
	int a[M][N][O]={2,5,1,3,6,9,7,5,3};
	add(a);
printf("%d",add(a));
}

