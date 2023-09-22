#include"stdio.h"
#include "stdlib.h"

#define NULL_ptr  ((void *)0)

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long int u32;

 struct node
{
	u16 head;
	struct node *tail;
};
void Push(struct node **head_ref,int data)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->head=data;
	new_node->tail=*(head_ref);
	*(head_ref)=new_node;
	printf("New Node added \n");
}
int getCount(struct node *Head)
{
    int count = 0; // Initialize count
    struct node *current = Head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->tail;
    }
    return count;
}
void printlist(struct node *Head)
{
	 struct node *temp = Head;
	 while(temp != NULL)
	 {
		 printf("in while\n");
		 printf("%d\n",temp->head);
		 temp=temp->tail;
	 }
	 printf("Null");
}
int main()
{
	int id,newdata;
	struct node *Head=NULL_ptr;
	printf("To add node enter 0\n");
	printf("To print linked list enter 1\n");
	printf("To exist enter 2\n");
	printf("Enter your choice: ");
	
	while(id != 2)
	{
		scanf("%d",&id);
	switch (id)
	{
		case 0: printf("Enter Data in new Node");
				scanf("%d",&newdata);
				Push(&Head, newdata);
		break;
		case 1: printlist(&Head);
		break; 
		case 2: return 0;
		break;
		default: printf("Invalid choice\n");
	}
	}
    printf("count of nodes is %d", getCount(Head));
    
}
	
