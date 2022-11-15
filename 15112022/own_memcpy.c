//memcpy implimentation
#include<stdio.h>
#include<string.h>

int main()
{
 char src[] = "memory copying";
 char dest[50];
   for(int i=0;i<strlen(src)+1;i++)
   {
       dest[i]=src[i];
   }
    printf("%s",dest);
    return 0;
}
