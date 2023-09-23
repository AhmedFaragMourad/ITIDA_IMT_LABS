#include"stdio.h"
#include "stdlib.h"

//#define NULL_ptr  ((void *)0)
/*
Head -> points to first of list 
Null -> last in list
*/
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long int u32;

 struct node
{
	u16 head;
	struct node *tail;
};
int size;


void Push_Front(struct node **head_ref,int data)
{
	 // Create a new node
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->head=data;
	
	 if (*head_ref == NULL)//list not created yet
        {
            *head_ref = new_node;//head points to created node as first one
            (*head_ref)->tail = NULL;
        }
        else
        {
            new_node->tail = *head_ref;//old node add = tail
            *head_ref = new_node;//head points to newest node **first one**
        }
	printf("New Node added \n");
}


void Push_Back(struct node** head_ref, int new_data)
{
    // Create a new node
    struct node* new_node
        = (struct node*)malloc(sizeof(struct node));
    new_node->head = new_data;
 
    // Store the head reference in a temporary variable
    struct node* last = *head_ref;
 
    // Set the next pointer of the new node as NULL since it
    // will be the last node
    new_node->tail = NULL;
 
    // If the Linked List is empty, make the new node as the
    // head and return
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
 
    // Else traverse till the last node
    while (last->tail != NULL) {
        last = last->tail;
    }
 
    // Change the next pointer of the last node to point to
    // the new node
    last->tail = new_node;
}
void deleteNode(struct node** head_ref, int key)
{
    // Store head node
    struct node *temp = *head_ref, *prev;
  
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->head == key) {
        *head_ref = temp->tail; // Changed head
        free(temp); // free old head
        return;
    }
  
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->head != key) {
        prev = temp;
        temp = temp->tail;
    }
  
    // If key was not present in linked list
    if (temp == NULL)
	{    printf("Invalid Key\n");
        return;
	}
    // Unlink the node from linked list
    prev->tail = temp->tail;
  
    free(temp); // Free memory
	
}

// function to insert a Node at required position
void insertPos(struct node** current, int pos, int data)
{
    // This condition to check whether the
    // position given is valid or not.
    if (pos < 1 || pos > size + 1)
        printf("Invalid position! \n");
    else {
  
        // Keep looping until the pos is zero
        while (pos--) {
  
            if (pos == 0) {
  
                // adding Node at required position
				// Create a new node
     struct node* temp 
        = (struct node*)malloc(sizeof(struct node));
    temp->head = data;
                
  
                // Making the new Node to point to 
                // the old Node at the same position
                temp->tail = *current;
  
                // Changing the pointer of the Node previous 
                // to the old Node to point to the new Node
                *current = temp;
            }
            else
              // Assign double pointer variable to point to the 
              // pointer pointing to the address of next Node 
              current = &(*current)->tail;
        }
        size++;
		printf("New Node added \n");
    }
	
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
	int counter=1;
	 struct node *temp = Head;
	 if(temp == NULL)
		 printf("List is Empty \n");
	 else{
	 while(temp != NULL)
	 {
		 printf("Node Number %d = ",counter);
		 printf("%d\n",temp->head);
		 temp=temp->tail;
		 counter++;
	 }
	 counter=1;
	 printf("Null\n");
	 }
}
int main()
{
	int id,newdata,key,location;
	struct node *Head=NULL;
	while(id != 7)
	{
		printf("\n");
	printf("To add node in Front enter 0\n");
	printf("To add node in Back enter 1\n");
	printf("To print linked list enter 2\n");
	printf("To get list nodes count enter 3\n");
	printf("To get list size 4\n");
	printf("To add Node in Certian Position Enter 5\n");
	printf("To delete node enter 6\n");
	printf("To exist enter 7\n");
	printf("Enter your choice: ");
		
		scanf("%d",&id);
	switch (id)
	{
		case 0: printf("Enter Data in Front new Node: ");
				scanf("%d",&newdata);
				size++;
				Push_Front(&Head, newdata);
		break;
		case 1: printf("Enter Data in Back new Node: ");
				scanf("%d",&newdata);
				size++;
				Push_Back(&Head, newdata);		
		break; 
		
		case 2: 
				printlist(Head);
		break;
		
		case 3: 
				printf("linked list count = %d ",getCount(Head));
		break;
		
		case 4: 
				printf(" %d\n",size);
		break;
		
		case 5: 
				printf("Enter node location: ");
				scanf("%d",&location);
				printf("Enter node data: ");
				scanf("%d",&newdata);
				insertPos(&Head,location,newdata);
		break;
		
		case 6:  
				printf("Enter node data: ");
				scanf("%d",&key);
				size--;
				deleteNode(&Head,key);
		break;
		
		case 7: printf("Thank YOu \nGoodbye\n");
					return 0;
		break;
		
		default: printf("Invalid choice\n");
	}
		
	}
	
   
    
}
	
