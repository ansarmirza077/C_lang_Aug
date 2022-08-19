//WAP two numbers using pointers
#include<stdio.h>

int swap();
/*
{
    int a=10,b=5;
    int *p,*q;
    p=&a,q=&b;
    int *temp=p;
    p=q;
    q=temp;
printf("%d %d",*p,*q);
}*/

int main()
{
    swap();   
}

int swap()
{
    int a=10,b=5;
    int *p,*q;
    p=&a,q=&b;
    int temp=*p;
    *p=*q;
    *q=temp;
printf("%d %d",*p,*q);
}