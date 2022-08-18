//Two pointers cannot be added but a pointer can be added see line 10
#include<stdio.h>
#define N 5

int main()
{
    int a[]={5,-1,8,7}; //remember array 0th index is by default a pointer
    int *p=&a[0];
    printf("%d\n",*p);
    p=p+3; //pointer is incremented with 2
    printf("Value after increment :%d\n",*p);
    //*p=2;
    //printf("Checking line 11 %d\n",*p);
    printf("%d\n %d\n %d\n",*--p,*--p,*--p);

}