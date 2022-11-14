//count no of 0's and 1's in given binary number 

#include<stdio.h>

int main()
{
    int a=14;
    int count0=0,count1=0;
    
    while(a>0)
    {
        if(a&1){   //goes inside loop if conditon true
            count1++;
        }
        else{
        count0++;
    }
        a=a>>1;
    }
    printf("The no of 1's & 0's in  are : %d %d",count1,count0);
}
