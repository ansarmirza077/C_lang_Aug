//WAP to see LSB set or not
#include<stdio.h>

int main()
{
    int a;
    printf("Enter no to check LSB ");
    scanf("%d",&a);
    if(a&1)
    {
    printf("The LSB is set-%d",a&1);
    }
    else printf("LSB is unset-%d",a&1);
}

