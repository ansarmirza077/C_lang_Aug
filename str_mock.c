// Input: It is a string with smallest and largest word
// Expected output: The largest word is 'smallest' and the smallest word is 'a' in the string : 'It is a string with smallest and largest word.'

#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="applying string here";
    int len =strlen(str);

    char *ptr=str;
    // for(int i=0)
    int count =0;
    if(*ptr !=' ')
    {
        ptr++;
    }
    ptr++;
    printf("The count is ",count);


    // for(int i=0;i<len;i++)
    // {
    //     int count =0;
    //     if(str[i] !=' ')
    //     {
    //         count++;
    //     }
    //     printf("the count is%d",count);
    // }

}
