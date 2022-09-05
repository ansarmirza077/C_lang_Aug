//See clarity between array of pointers and pointer to array
#include<string.h>
#include <stdio.h>

int main() {
    int a[5]={10,20,30,40,50};
    int *ptr=a;
    int *arr_ptr[5];//array of five pointers pointing to data type of integer type
    char *char_ptr[]={"red","blue","yellow"};//it is array of pointers pointing to char data type
    printf("%s\n",char_ptr[2]);
    printf("%d\n",ptr[0]);
    printf("%s\n",char_ptr[2]+3);//
    
    int **p1=char_ptr;
    printf("%s\n",*p1);//p1 contains address of array char_ptr
   // printf("%s\n",char_ptr[2]);
    printf("%c\n",**p1);
    
    
    
    return 0;
}