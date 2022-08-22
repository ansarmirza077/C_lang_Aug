//WAP to copy string using pointers
#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[] = "Program to copy string";
    char b[sizeof str];
    char *p,*q;
    p = str;
    q = b;
    int length;
    length = sizeof str;
    for(i=0;i<length;i++)
    {
        *q=*p;
        p++;
        q++;
    }
    printf("%s\n",b);
    printf("The length of new sring is %d\n",sizeof b);
}