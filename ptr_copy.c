//Write a C program to copy one array to another using pointers.
#include<stdio.h>
#define LIMIT 50

int main()
{
    int i;
    int a1[3]={1,2,3};
    int a2[3];

    for(i=0;i<3;i++)
    {
        *(a2+i)=*(a1+i);
    }
    for(i=0;i<3;i++)
    printf("%d",a2[i]);

}