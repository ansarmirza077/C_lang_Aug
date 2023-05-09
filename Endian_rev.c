//LSB ---> MSB
#include <stdio.h>

int main()
{
    int b=0x53215881;
    int b1,b2,b3,b4;
printf("Before reversing:%x\n ",b);
    b1=b & 0xff >> 0;
    printf("%x\n",b1);
    b2=(b & 0xff00) >>8 ;
    printf("%x\n",b2);
    b3=(b & 0xff0000) >> 16;
    printf("%x\n",b3);
    b4=(b & 0xff000000) >> 24;
    printf("%x\n",b4);
    int result = (b1<<24) | (b2<<16) | (b3<<8) | (b4<<0);
    printf("%x",result);
    return 0;
}
