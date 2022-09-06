#include<stdio.h>
#include<string.h>
//#define N

int rev(char str[],int len)
{   
    for(int i=len;i>=0;i--)
    {
        printf("%c",str[i]);
    }
printf("%d",len);

}
int main()
{
    char str[]="applying string reverse";
    int len = strlen(str);
    rev(str,len);
    printf("%s",str);
}