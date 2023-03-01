#include<stdio.h>

int main()
{
int a=0x435286;
int b= a & 0xff;
printf("%x\n",b);
int c=  (a>>16);
printf("%x\n",c);


}
