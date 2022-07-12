#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
};




struct node *del_first(struct node*head)
{

	if(head==NULL) printf("List is empty");
	else {
		struct node*temp=head;
		head=head->link;
		free(temp);
		temp=NULL;
	}
}

struct node *del_last(struct node *head)
{
	if(head==NULL) printf("List is empty");
	else if(head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else{
		struct node*temp=head;
		struct node *temp2=head;
		while(temp->link != NULL)
		{
			temp2=temp;
			temp=temp->link;
		}
		temp2->link=NULL;
		free(temp);
		temp=NULL;
	}
}



void del_pos(struct node **head,int position)
{
	struct node *current=*head;
	if(*head==NULL)printf("List is empty");
	else if (position==1)
	{
		*head=current->link;
		free(current);
		current = NULL;
	}
	else {
		while (position != 1)
		{
			previous = current;
			current =current->link;
			position --;
		}
		previous->link=current->link;
		free(current);
		current=NULL;
	}
}



struct node *add_beg(struct node *head,int d)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=NULL;
	ptr->link=head;
	head=ptr;
}

void add_at_last(struct node *head,int data)
{
	struct node *ptr,*temp;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link !=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
}

void add_at_pos(head,data,position){
	struct node *ptr=head;
	struct node *ptr2=(struct node*)malloc(sizeof(struct node));
	ptr2->data=data;
	ode add_beg()
		ptr=ptr->link;
		pos--;
	}
	ptr2->link=ptr->link;
	ptr->link=ptr2;
}



int main(){
	int ch,data;
	while(1){
		printf("Enter 1.To insert at beg\n 2.To insert at position \n 3.TO insert at last\n 4.To delete first \n 5.To delete at position 6. To delete at last \n 7. To exit");

		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("Enter element to insert");
				scanf("%d",&data);
				add_beg(head);
				
case 2 : 
       int pos ;
       printf("Enter data,position");
       scanf("%d %d",&data,&pos);
       add_at_pos();
      
case 3 :
       add_at_last();
case 4 : 
case 5:
case 6 :
case 7:exit(0);
default : printf("Invalid choice");

       

}



