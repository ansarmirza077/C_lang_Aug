#include<stdio.h>
#include<string.h>

int main()
{

char str1[]="hello world";
char str2[100]="this world",str3[100];
//str3[100]=str1[10]+str2[10];
int len,j,i;
len=strlen(str2);
for(i=0;i<len;i++)
{
str3[i]=str2[i];
//printf("%s",str3);
}
//printf("%s",str2);
len=strlen(str1);
for(j=0;j<len;j++)
{
str3[i]=str1[j];
i++;
}
str3[i]='\0';
printf("%s",str3);
}
