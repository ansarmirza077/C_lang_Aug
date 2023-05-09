#include<stdio.h>

int main()
{
int a=-10,b=-20;
int i,r;
for(i=0;i<32;i++)
{
r=(a^b)>>31;
}
if(r<0)printf("Opposite");
else printf("Same");
}
