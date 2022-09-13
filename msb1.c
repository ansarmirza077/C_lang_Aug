#include<stdio.h>
#define BITS sizeof(int)
int main()
{
    int a;
    printf("Enter no to check MSB ");
    scanf("%d",&a);

    int msb = 1<<(BITS-1);
    if(a & msb) printf("MSB is set");
    else printf("MSB is not set");
}