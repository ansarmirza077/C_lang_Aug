#include<stdio.h>
#define pi 3.14
//const int r;
int main(){
	int n;
	float area,r;
	printf("Enter radius of circle");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area of circle : %f",area);
	return 0;
	
}
