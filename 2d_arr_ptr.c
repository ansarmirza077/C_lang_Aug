#include<stdio.h>
#include<stdlib.h>
#define M 2
#define N 3
display(int arr[M][N])
{
	int *ptr; 
	//int i,j;
//	for(i=0;i<M;i++){
//		for(j=0;j<N;j++)
for(ptr=&arr[0][0];ptr <= &arr[M-1][N-1];ptr++)
	{
	printf("%d",*ptr);
}
}

int main(){
	int arr[M][N]={1,2,3,4,5,6};
	display(arr);
	
}

