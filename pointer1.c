#include<stdio.h>

int main()
{
    int c;
    int a=10,b=9;
    
    int *p,*q;
    p=&a;
    q=&b;
    c=*q;
    *p=20;
    printf("%d\n",c);
    printf("%d\n",a);
    printf("%ld\n",p);
    printf("%d\n",*p);
}