#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct student 
{
    int roll;
    char name[18];
}class;


int main()
{
    //variable on heap
   class *s1=(class*)malloc(sizeof(class));
   s1->roll=473;
   strcpy(s1->name,"affan");
   //variable on stack
   class s2={21,"affan"};
   //array of struct on stack
   class s3[2];

  //array of struct on heap
  
 class *(s[10]);
 for(int i=0;i<3;i++)
  {
  s[i]=(class *)malloc(sizeof(class));
  s[i]->roll=10+i;
  printf("%d ",s[i]->roll);
  
  }
}