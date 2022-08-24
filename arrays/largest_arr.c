//Find the second largest element in a array
#include<stdio.h>
#define N 5

/*int main()
{
    int a[N]={20,10,50,30,40};
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
        if(a[i]<a[j])
        {
            int  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
        }
        }
}
for(int i=0;i<N;i++)
printf("%d ",a[i]);
printf("\nThe 2nd largest no is %d",a[1]);
}*/

int main()
{
    int a[N]={20,10,50,30,40};
    #ifdef SORT_ARRAY
printf("Sorting using macros");
    #else
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
        if(a[i]<a[j])
        {
            int  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
        }
        }
}
#endif
for(int i=0;i<N;i++)
printf("%d ",a[i]);
printf("\nThe 2nd largest no is %d",a[1]);
}