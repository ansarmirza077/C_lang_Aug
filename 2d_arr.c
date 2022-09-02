#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 3
display(int arr[M][N])
{
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++)
	{
	printf("%d",arr[i][j]);
}
}
}

int main(){
	int arr[M][N]={1,2,3,4,5,6};
	display(arr);
	
}

