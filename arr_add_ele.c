//10,20,30,40,50
//10,20,100,30,40
#include<stdlib.h>
#include<stdio.h>
void insert(int *ptr,int pos,int len,int val)
{
    //printf("Enter fp");
    for(int i=len-1;i>=pos-1;i--)
    {
        ptr[i+1]=ptr[i]; 
        //*(ptr+i)=*ptr;
    }
    ptr[pos-1]=val;
    for(int i=0;i<len;i++)
    printf("%d ",*(ptr+i));

}

int main()
{
    //int arr[]={10,20,30,40,50};
    int pos,val,len,n;
    printf("Enter pos and value");
     scanf("%d %d",&pos,&val);
    printf("Enter no of elments");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",ptr+i);
    //len=sizeof(arr)/sizeof(arr[0]);
    //printf("Entering fp");
    void (*fp)(int  ,int,int,int)=insert;
    fp(ptr,pos,n,val);
}


//sub string with length
#include<stdio.h>
#include<string.h>
int main()
{
 char string[50]="i work at thundersoft", longest[30];
 int count = 0, max = 0,i,j=0,index=0,length;
 //clrscr();

 length = strlen(string);
 index=0;
 /* Finding length of longest word and starting index */
 for( i = 0 ; i<=length ; i++)
 {
  if(string[i] != ' ' && string[i]!='\0')
  {
   count++;
  }
  else
  {
   if(count > max)
   {
    max = count;
    index = i-max;
   }
   count = 0;
  }
 }
 for(i=index;i< index+max;i++)
 {
  longest[j] = string[i];
  j++;
 }
 /* Inserting NULL character to terminate string */
 longest[j] = '\0';
 printf("Longest word is: %s\n", longest);
 printf("And its length is: %d",max);
 //getch();
 return 0;
}
