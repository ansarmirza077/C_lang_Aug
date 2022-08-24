#include<stdio.h>
int main()
{
    int a[6]={2,1,5,9,6,4};

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(a[i]<a[j])
            {
            int temp = a[i];
            a[i] = a[j];
            a[j]=temp;
            }
        }
    }
    for(int i=0;i<6;i++)
    printf("%d\t",a[i]);
    printf("\nsecond largest element is %d",a[1]);

}