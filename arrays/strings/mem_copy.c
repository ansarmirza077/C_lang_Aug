#include<stdio.h>
#include<string.h>

int mem_copy(char *str1,char *str2)
{
    int len;
    len = strlen(str1);
    for(int i=0;i<len;i++)
    { 
        str2[i]=str1[i];
}
printf("%s",str2);
}


int main()
{
    char str1[]="checking memcpy function";
    char str2[30];
    mem_copy(str1,str2);
    
}