#include<stdio.h>

int main()
{
	int i=9;
	float j=8.125;
	char c='a';
	double k=90;
	printf("\n%zu\n \n%zu\n \n%c\n \n%zu\n",sizeof(i),sizeof(j),sizeof('c'),sizeof(k));

	return 0;
}
