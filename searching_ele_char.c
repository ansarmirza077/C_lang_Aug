#include <stdio.h>
#include <stdlib.h>
void search_str(char *str1,char ch);
int main()
{
    char *str=(char *)malloc(sizeof(char)*2);
    char *ptr=(char *)malloc(sizeof(char)*2);
    str="My company is Thundersoft";
    char ch='s'; 
  //  ptr=&ch;
    search_str(str,ch);


    return 0;
}

void search_str(char *str1,char ch1)
{
   for(int i=0;i !='/0';i++)
   {
       if(str1[i] == ch1)
       {
           printf("%c",str1[i]);
           break;

       } 
}
}