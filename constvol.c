#include<stdio.h>
int main()
{
	const int i=8;
	int *b=&i;
	printf("\nValue =%d\n",i);
	*b=20;
	printf("\nValue =%d\n",i);
	return 0;
}
