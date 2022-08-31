//WAP to cal highest number in 2D array
#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 3

int add(int a[M][N])
{
	int i,j,temp;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N+1;j++)//if N+1 not taken matrix loses very last element during calculation
		{
			if(a[i][j] > a[i][j+1])
			{
				temp    = a[i][j];
				a[i][j]  = a[i][j+1];
				a[i][j+1] = temp;
			}
		}
	}
//printf("%d\n",temp);
return temp;
	}

int main(){
	int a[M][N]={2,25,1,3,6,9};
int high=add(a);
	printf("The Highest number in array is : %d",high);
}

