//String reversal permanently 
#include <stdio.h>
#include<string.h>

int rev(char str[],int len)
{
    int i,temp;
   for(i=0;i<len/2;i++)
   {
       temp=str[len-i-1];
       str[len-i-1]=str[i];
       str[i]=temp;
       
   }
   
}

int main() {
  char str[]="applying string reverse";
  int len = strlen(str);
    rev(str,len);
    printf("%s",str);
    return 0;
}