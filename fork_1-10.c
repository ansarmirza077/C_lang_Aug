#include<stdio.h>

int main()
{
    int n,i;
    int id = fork();
    if(id==0)
    {
        n=1;
    }
    else 
    {
        n=6;
    }
    if(id!=0) //condition to make parent process wait untill child gets terminated
    {
        wait();
    }
    for(i=n;i<n+5;i++)
    {
        printf("%d",i);
    }
    // printf("\n");

}