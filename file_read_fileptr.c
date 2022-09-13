#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=NULL;
    //char ch;
    char str[1000];
    fp=fopen("vowels.c","r"); //reading vowels.c if vowels.c not present gives error not like create a new one as we do in write file
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    //while( !feof(fp)) feof->returns 0 if ends
   // {
    //    ch=fgetc(fp);
     //   printf("%c",ch);
    //}

    while(!feof(fp))
    {

    fgets(str,100,fp);//reads 8 charecters from file vowels.c

    /*here 700 chars must read but one first line it is reading bcz fgets functn stops it finds a new line operator so use while loop to print multi line*/ 
    printf("%s",str);
    }


    fclose(fp);
}