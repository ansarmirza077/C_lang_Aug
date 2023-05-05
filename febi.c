#include<stdio.h>
int main()
{
int i,a=0,b=1,sum=0;
//sum=a+b;
//printf("%d %d",a, b);
for(i=2;i<10;i++)
{
printf("%d",sum);
a=b;
b=sum;
sum=a+b;
}

}

