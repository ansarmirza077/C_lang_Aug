#include<stdio.h>
#include<stdlib.h>

int rev_str(char s1[20])
{
	int i;
//	for(i=20;i>=0;i--)
//	{
//		s2[i]=s1[i];
//	}
		for(i=20;i>=0;i--)
	printf("%c",s1[i]);
}

int main(){
	char s1[20] = "string reverse";
	rev_str(s1);


}

