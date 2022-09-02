#include<stdio.h>
#include<string.h>

int mem_move(char *str1,char *str2)
{
    int len;
    len = strlen(str1);
    for(int i=0;i<len;i++)
    {
        str1[i]=str2[i];
    }
    printf("%s",str1);
}


int main()
{
    char str1[]="Applying mem move ";
    char str2[]="2nd string";
    mem_move(str1,str2);
}