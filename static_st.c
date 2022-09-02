#include<stdio.h>
void display_ini();
void display_ini();
void display_unin();

int main()
{
     display_ini();
     display_ini();
     display_unin();

}

void display_ini()
{
    static int x=10;//Initialized static variable
    x++;
    printf("%d\n",x);
}
void display_unin()
{
    static int x; //Uninitialized so taking zero as default vlalue
    x++;
    printf("%d\n",x);

}