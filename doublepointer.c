#include<stdio.h>

int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;//p is single level pointer here &a cannot be written which is a normal variable
    int ***r=&q;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***r);
    /*
    **q --> **(&p)
            *(value at address of p)
            value at address of 13th line  * pointer

    */
    }
    
    