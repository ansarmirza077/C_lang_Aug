//wap to rev string permanently using pointers
#include<stdio.h>
#include<string.h>

int rev(char str[])
{
    char *st=str;
    char *end=str;
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        end++;
    }
    end--;
    char temp;
    for(int i=0;i<len/2;i++)
    {
      temp=*(end);
      *end = *st;
      *st=temp;
        end--;
        st++;
    }

    printf("%s",str);
}

int main()
{
    char str[]="applying reversal ";
    rev(str);
  //  printf("%s",ptr);
}