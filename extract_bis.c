//print bits from 2 to 5 of a given number

#include<stdio.h>

int main()
{
    int a=120;
     a=a>>2;
   int c=((1<<6)-1);//6-1 means till 5 bits we can extract
   printf(" %d",a & c);
 
}
