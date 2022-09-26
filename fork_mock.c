
#include<stdio.h>
int main()
{
    
    printf("Before fork %d\n");
    int id=fork();
    if(id != 0)
    {
        fork();
    }
    printf("PID = %d\n",getpid());
     printf("after fork\n");

}