#include<stdio.h>
//auto int x=10;  gives error : file scope declaration
int main()
{
    register int x=10;
    
    {
        register int x; //auto undeclared so G.V
        printf("default value with in block %d ",x);
    }
    printf("\nvalue in main scope %d\n ",x);


}