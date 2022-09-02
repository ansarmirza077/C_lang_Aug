#include<stdio.h>
#define N1 1
#define N2 2
#define N N1+N2
struct class
{
    int math;
    int eng;
};


int main()
{
    int temp1[11],temp2[11];
    struct class sec1[5];
    struct class sec2[6];

for(int i=1;i<=N1;i++)
{
printf("Enter section-1 student-%d details\n",i);
scanf("%d\t%d\t",&sec1[i].math,&sec1[i].eng);
}
for(int i=1;i<=N2;i++)
{
printf("Enter section-2 student-%d details",i);
scanf("%d\t %d\t ",&sec2[i].math,&sec2[i].eng);
}
// for(int i=1;i<=N2;i++)
// {
// printf("sec-1 stu-%d details are %d %d ",i,sec1[i].math,sec1[i].eng);
// printf("sec-2 stu-%d details are %d %d\n ",i,sec2[i].math,sec2[i].eng);
// }
for(int i=1;i<=N1;i++)
{
    if(sec1[i].math > sec1[i].eng)
    {
        printf("In sec1 highest is Maths :%d\n",sec1[i].math);
        temp1[i]=sec1[i].math;
     }
     else 
     {printf("In sec1 highest is English :%d\n",sec1[i].eng);
     temp1[i]=sec1[i].eng;
     }
 for(int i=1;i<=N2;i++)
{
    if(sec2[i].math > sec2[i].eng)
    {
        printf("In sec2 the highest is Maths :%d\n",sec2[i].math);
        temp2[i]=sec2[i].math;
     }
    else 
    {
        printf("In sec2 the highest is English :%d\n",sec2[i].eng);
        temp1[i]=sec2[i].eng;
    }
// for(int i=1;i<N;i++)
// {
    if(temp1[i] > temp2[i])
    {
        printf("The highest %d\n",temp1[i]);
} else printf("The highest %d\n",temp2[i]);
    }
    }
}