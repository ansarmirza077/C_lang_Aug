// C Program to see structre pointer or pointer to structure
// IMP NOTE : .(dot) used to access general variable  ,  (->) used to access pointer variable 
#include<stdio.h>
struct student {
    char name[50];
    int rollno;
    float percentage;
};

int main()
{
    struct student s1;
    printf("\nEnter info for s1 : ");
    scanf("%s\t %d\t %f",s1.name,&s1.rollno,&s1.percentage);

    struct student *ptr;
    ptr=&s1;//int *ptr=&s1;
printf("s1 details are Name :%s\n Rollno :%d\n Percentage : %f ",ptr->name,ptr->rollno,ptr->percentage);  //printing using pointers //(*ptr).rollno sllr to ptr->rollno

struct student s2={" (compile time declared)park man",45,65.365};
struct student *ptr2=&s2;
printf("Name : %s\n Rollno : %d\n Percentage : %f",ptr->name,ptr->rollno,ptr->percentage);//printing using pointers
printf("\nprinting w/o pointer Name : %s\n Rollno : %d\n Per :%f\n",s2.name,s2.rollno,s2.percentage);//General printing w/o pointers


// printf("Float size is %ld ",sizeof(float));
// printf("Float size is %ld ",sizeof(char));
// printf("Float size is %ld ",sizeof(int));
// printf(" structure size is %ld",sizeof(struct student));
}