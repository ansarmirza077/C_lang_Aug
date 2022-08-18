#include<stdio.h>
int main()
{
    int a[]={3,2,67,0,56};
    int *p;
    p=a;//equals p=&a[0]
    printf("%d \n",*p++);//first prints then increments 
    printf("%d\n",*p);
    printf("%d\n",*++p);//first increment and prints that value
    printf("%d\n",*p--);
    printf("%d\n",*p);
    printf("%d",++*p);
}