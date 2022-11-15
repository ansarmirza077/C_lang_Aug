//own memcpy implimentation using pointers
#include<stdio.h>
#include<string.h>

int main()
{
 char src[] = "memory copying";
 char dest[50];
 char *ptr=src;
 char *ptr1=dest;
 int i=0;
  while(src[i] != '\0')
{
    *ptr1=*ptr;
   ptr1++;
    ptr++;
    i++;
}
// for(int i=0;i<strlen(src)+1;i++)
// {
//      *(ptr1+i) = *(ptr+i);
//      //printf("%c",*((ptr+i)));
// }
printf("%s",dest);
    
    return 0;
}
