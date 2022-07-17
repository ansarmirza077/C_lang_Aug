#include<stdio.h>
#include<stdlib.h>


#define N 5
int top=-1;
int stack[N];


void push();
void pop();
void peek();
void display();
void dis_min();


int main(){
		int ch;
		do{
			printf("Enter 1>To Push 2)To POP 3)To PEEK 4)TO Display Stack list 5)To Display Min value 6) TO exit(0)");

	scanf("%d",&ch);
	switch (ch){
	case 1: push();break;
	case 2: pop();break;
	case 3: peek();break;
	case 4: display();break;
	case 5: dis_min();break;
	case 6: exit (0);break;
	default : printf("Invalid choice");
	}}while(ch!=0);
}




void push(){
	int ele;
	if(top==N-1)printf("Stack over flow");
	else {
		printf("Enter element to push");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;

	}
}

void pop(){
if(top==-1)printf("Stack ubder flow");
else{
printf("The poped element is %d",stack[top]);
top--;
}
}

void peek(){
	if(stack[top]==-1)printf("Stack is Empty");
	else printf("The top most element is %d",stack[top]);
}

void display(){
if(top==-1)printf("Stack Empty");

else {
	for(int i=0;i<N-1;i++)
	printf("The stack elements are %d",stack[i] );

}
}


void dis_min(){
	int min=0;
	min=stack[top];
	for( int i=0;i<N-1;i++)
	{
	if(stack[i] < min){
		min=stack[i];
	}
	}
	printf("The min element is %d",min);
		}

		

