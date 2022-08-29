#include<stdio.h>
#include<stdlib.h>

int str_copy(char s1[25],char s2[25])
{
	int i;
	for(i=0;i<25;i++)
	{
		s2[i]=s1[i];
	}
for(i=0;i<25;i++)
	printf(" %c",s2[i]);
}

int main(){
char s1[25] = "comparing strings",s2[25];
result = str_copy(s1,s2);
//printf("The comarison is %s",result);
}

