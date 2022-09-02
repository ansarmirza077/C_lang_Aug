#include<stdio.h> //file handling header which contains FILE pointer
#include<stdlib.h>  //header for exit(1) -->not for file handling
#include<string.h>

//writing char 
// int main()
// {                       

//     FILE *fp; //pointer of file type data type
//     // char ch='a';
    // fp =fopen("abc.txt","w"); //abc.txt ifnot present then creates new one under abc.txt name and opens

    // if(fp==NULL)  //cheks if file created or not like I did in DS malloc if memory created or not
    // {
    //     printf("file Not created");exit(1);
    //     }
    // fputc(ch,fp);
    // fclose(fp);
    //}

//writing string char by char format

int main()
{
    FILE *fp=NULL;
    // //char str[30]="writing string in file";
    // fp=fopen("str_writie.txt","w"); //opened file str_writes if that file not exist created a new one and opens
    // fputs(str,fp); //written string under str string name
    // fclose(fp);

    char str[30];
    fp=fopen("str_runtime.txt","w");
    printf("Enter string");
    gets(str); //as scanf  
    // for(int i=0;i!=strlen(str);i++)
    // fputc(str[i],fp); //copying string one by one char to char format
    fputs(str,fp); //sllr to above 2 lines
    fclose(fp);
}



