//WAP to see MSB set or not
#include<stdio.h>
#define BITS sizeof(int)//means number is seen in form of bits not bytes  also #define BITS sizeof(int)*8

int main()
{
    int n,msb;
    printf("Enter no ");
    scanf("%d",&n);

    msb=1<<(BITS-1);//1 is shiting 4-1=3 bits left means at last bit 
    if(n & msb)printf("The MSB of %d is set(1)",n);
    else printf("The MSB of %d is set(0)",n);

printf("Bit is %d",msb);
    }







