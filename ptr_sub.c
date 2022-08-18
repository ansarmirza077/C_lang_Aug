#include<stdio.h>

int main()
{
    int a[]={3,6,-1,5};
    int *p=a; //this equals *p=a[0] bcz by default array 1st element is pointing at its 0th index
    int *q=&a[3];
    printf("The  p-q is %ld\n",p-q);//means p & q are 3 elements apart
    printf("The  q-p is %ld\n",q-p);
    printf("q before sub  is %d\n",*q);
    q=q-2;
    printf("q after sub is %d\n",*q);//means q was a[3] which is 5 but q-2 -->decreases q value by 2 elements i.e from index 3 to 1
    q=q+2;
    printf("q after increment %d",*q);//again when q is increased it given value 5 which is last element of an arrray
    }
    
    //REMEMBER
    // NOTE : In printf if i give *P it prints p
    // if i give only p it prints address of p bcz p is a pointer