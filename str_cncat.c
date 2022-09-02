#include<stdio.h>
#include<stdlib.h>

int str_cat(char str1[22],char str2[30])
{
	int i=0,j=0;
	char str3[100];
	while(str1[i] !='\0'){
	str3[j]=str1[i];
	i++;
	j++;
}
i=0;
	while(str2[i] !='\0'){
	str3[j]=str2[i];
	i++;
	j++;
}
str3[j]= '\0';
printf("%s",str3);
}



int main(){
	char str2[30]= "second string",str1[22]= "first string ";
	printf("The concatinated string is : ");
	str_cat(str1,str2);
}

