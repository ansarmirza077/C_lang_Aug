 #include<stdio.h>
 #include<string.h>

// int rev_str(char s1[20])
// {
// 	int i;
// //	for(i=20;i>=0;i--)
// //	{
// //		s2[i]=s1[i];
// //	}
// 		for(i=20;i>=0;i--)
// 	printf("%c",s1[i]);
// }

// int main(){
// 	char s1[20] = "string reverse";
// 	rev_str(s1);


// }
int str_rev(char *str)
{
    int i=0,len;
    len = strlen(str);
    char *ptr=str;
    char *ptr1=str,temp;
    for (i = 0; i < len - 1; i++)//making ptr1 point to last of char array
    ptr1++;
    for(i=0;i<len/2;i++)
    {
        temp=*ptr1;
        *ptr1=*ptr;
        *ptr=temp;
        ptr++;
        ptr1--;
    }
    
}

int main()
{
    int len;
    char str[100]= "Reversing strings";
    
   // printf("%d",len);
    str_rev(str);
    printf("%s",str);
}


