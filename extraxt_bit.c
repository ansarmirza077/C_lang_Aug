#include <stdio.h>
int main()
{
    int a=150;
    int p=2,k=5,b;
    a=(a>>(p-1));
    b=(1<<k)-1;
    printf("%d",a&b);
    
}