#include<stdio.h>

union abc
{
    int a;
    char b;
    float c;
};                                          /*conclusion : Unions are used when we need only one member element of defined structure 
                                                bcz memory taken by structure will be equal to data types defined instructure but union has onlt one memory block 
                                                    which over write all values and stores only last declared value*/





int main()
{
    union abc s1;
    s1.a=12;
    s1.b='k';
    s1.c=76.22;
    union abc *ptr = &s1;
   // printf("%d %c %f ",s1.a,s1.b,s1.c);
   // printf("%d %c %f ",ptr->a,ptr->b,ptr->c);
    printf("%d\n",ptr->a);
    printf("%c\n",ptr->b);
    printf("%f\n",ptr->c);
    printf("%d",sizeof(union abc));
}