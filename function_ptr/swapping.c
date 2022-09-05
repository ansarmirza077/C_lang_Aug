#include<stdio.h>

int main()
{

    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);
}

//a=a+b-(b=a)
//char ptr[2]+3 gives char from last 3rd 