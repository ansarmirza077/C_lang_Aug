#include<stdio.h>
#include<stdlib.h>

int searching(char *str,char search_ele)
{
    for (int i=0;i !='/0';i++)
    {
        if(str[i] == search_ele)
        {
                printf("%c",search_ele);
                break;
        }
    }
}

int searching_arr(char *ptr,char search_ele)
{
    for (int i=0;i != '/0';i++)
    {
        scanf("%c",ptr[i]);
}
    for (int i=0;i !='/0';i++)
    {
    if(ptr[i] == search_ele)
        {
                printf("%c",ptr[i]);
                break;
        }
}
}

int main()
{
    char *str=(char *)malloc(sizeof(char)*35);
    char *ptr=(char *)malloc(sizeof(char)*5);
    str="applying string here with malloc";
    char search_ele='c';

    searching(str,search_ele);
    searching_arr(ptr,search_ele);
}