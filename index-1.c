#include<stdio.h>
#include<stdlib.h>
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *start;
int main()
{
	struct node *newnode1 = (struct node*) malloc(sizeof(struct node));
	struct node *newnode2 = (struct node*) malloc(sizeof(struct node));
	start = newnode1;
	newnode1->data = 2;
	newnode1->next = newnode2;
	newnode2->data = 3;
	newnode2->next = NULL;
	display();
	return 0;
}
void display()
{
	struct node *temp;
	temp = start;
	while(temp!=NULL)
	{
		printf("data = %d, self addr = %d, next addr = %d\n",temp->data,temp,temp->next);
		temp=temp->next; 
	}
}