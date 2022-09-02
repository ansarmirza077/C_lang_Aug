#include<stdio.h>

int chk_bit(int n,int bit_pos)
{
    printf("Enter bit position to check");
    scanf("%d",& bit_pos);
    int pos=1<<bit_pos;
    if(n & pos)printf("nth bit set(1)");
    else printf("nth bit is set(0)");
}

int main()
{
    int n,bit_pos;
    printf("Enter no ");
    scanf("%d",&n);
    chk_bit(n,bit_pos);    
}
