/*Take an array of 10 char - if they are vowels 
 print elements 
 their positions 
 their address
*/


#include<stdio.h>
#define N 10
int main()
{
    char a[N]={'a','b','c','d','e','f','g','h','i','j'};
    for(int i=0;i<N;i++)
    {
        if(a[i]== 'a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            printf("At position %d = ",i);
            printf("%c\n",a[i]);
            printf("Address of %c %p\n ",a[i],&a[i]);
            
        }
    }
    
}