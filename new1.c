#include<stdio.h>
int main()
{
    int i,a[]={2,5,7,0,4,0,7,-5,8,0},temp,j;
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            temp=a[i];
            for(j=10;j<10;j--)
            {
                if(a[j]!=0)
                {
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
     //   for(i=0;i<10;i++)
       //    printf("%d",a[i]);
    }
    for(i=0;i<10;i++)
            printf("%d",a[i]);
}
            
}