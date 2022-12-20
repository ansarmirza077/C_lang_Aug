#include<stdio.h>

int main()
{
int a=5,b=7;
int c,i,count=0;
c=a^b;
for(i=3;i>=0;i--)
{
if(c &  (0x1<<i))
{
count++;
}
//printf("%d",count);
}
printf("%d",count);
}
