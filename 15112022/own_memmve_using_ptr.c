//memmve implementation using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    char src[]="implenenting memmove";
    char dest[50];
    char *ptr=src;
    char *ptr1=dest;
    char *temp=0;
    int i;
    int n= strlen(src)+1;
    for(i=0;i<n;i++)
    {
        temp = (ptr+i);
        *(ptr1+i) = *temp;

    }
    printf("%s",ptr1);
}
