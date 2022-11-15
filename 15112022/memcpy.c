//memcpy implementation
#include<stdio.h>
#include<string.h>
int main()
{
char src[]="implementing memcopy\n ";
char dest[50];
strcpy(dest,"Hello");//hello will be in dest
printf("DEst before memcpy :%s\n",dest);
memcpy(dest,src,strlen(src)+1);
printf("%s",dest);
}

