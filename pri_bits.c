//WAP to display number in Binary format

#include<stdio.h>
int main()
{
 int a=10;
 int i;
 for(i=7;i>=0;i--) //replace i=31 then gives 32 bits and so,on
 {
     if(a&(0x1<<i))
     {
         printf("1");
     }
     else
     {
         printf("0");
     }
 }
}