#include<stdio.h>
#include"header.h"
int main()
{
	printf("I'm in main.c");
	printf("calling hello function");
	hello();
	printf("calling add function");
	add(10,20);
	printf("Back in main.c");
}
