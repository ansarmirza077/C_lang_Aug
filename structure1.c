//Declaring and accessing structure 
#include<stdio.h>

struct student
{
    int rollno;
    char name[18];           // By this memory not allocated this is just a template and we cannot initialize like int rolno=12; here
    float percentage;
};


 //struct student s;
//     struct student s2={13};                 Here also we can declare like line 18 & 19.


int main()
{
    struct student s1={12,"frank",90.99};
    struct student s2={13};

    printf("The s1 info is rollno : %d\n Name : %s\n Percentage :  %f\n",s1.rollno,s1.name,s1.percentage);
    printf("The s2 info is rollno : %d\n Name : %s\n Percentage :  %f\n",s2.rollno,s2.name,s2.percentage);      // Line 21,22 are compile time initialization


    // printf("The info for s is \n");
    // scanf("%d %s %f",&s.rollno,&s.name,&s.percentage);
    // printf(" Rollno : %d  Name : %s Percen : %f ",s.rollno, s.name,s.percentage); // Run time initialization
}