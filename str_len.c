//strlen()
//strcmp()
//strncmp()
//strcpy()
//strncpy()
//strrev()
//strcat()
//strstr()
//strncat()
// WAP to cal string len

#include<stdio.h>
int str_length(char x[20])
{
	int count=0,i;
	for(i=0;i<40;i++)
	{
	if(x[i] != '\0')
	{
		count++;
		//printf("\nlength is %d\n",count);
	}
}
	return count;
}

int main()
{
	int len;
	char a[50] = "Writing a progrm to calculate length";
	len = str_length(a);	
	printf("String length is  :%d ",len);
}


