#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

//function to create and traverse a linked list

void createList(int n);
void insertNodeAtBeginning(int data);
void insertNodeAtEnd(int data);
void deleteFirstNode();
void traverseList();

int main()
{
    int n,data;
    printf("Enter the total number of nodes: ");
    scanf("%d",&n);
    createList(n);
    printf("\nData in the list\n");
    traverseList();
    insertNodeAtBeginning(data);
    printf("\nData in the list\n");
    traverseList();
    insertNodeAtEnd(data);
    printf("\nData in the list\n");
    traverseList();
    deleteFirstNode();
    printf("\n Data in the list\n");
    traverseList();
    return 0;
}

//create a list of n nodes

void createList(int n)
{
    struct node *newnode, *temp;
    int data ,i;
    //create head node
    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory!");
        exit(0);
    }

    printf("Enter the data of node 1: ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    //create remaining nodes

    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Unable to allocate memory!");
            break;
        }
        printf("Enter the data of node %d :",i);
        scanf("%d",&data);
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }

}

void insertNodeAtBeginning(int data)
{
    struct node *newnode;
    
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode ==NULL)
    {
        printf("Unable to allocate memory!");
        
    }
    else
    {
        printf("Enter the data of new node: ");
        scanf("%d",&data);
        newnode->data = data;
        newnode->next = head;
        head = newnode;
        printf("Data inserted Succesfully!\n");
    }
}

void insertNodeAtEnd(int data)
{
    struct node *newnode ,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Unable to allocate memory!");
    }
    else
    {
        printf("Enter the data u want to insert at end: ");
        scanf("%d",&data);
        newnode->data = data;
        newnode->next = NULL;
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        printf("Data inserted succesfully!\n");
    }
    
}

void deleteFirstNode()
{
    struct node *toDelete;
    int choice;

    printf("Press 1 to delete first node: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        if(head==NULL)
        {
            printf("List is Empty!");

        }
        else
        {
            toDelete = head;
            head = head->next;
            printf("\nDeleted Data is %d\n" ,toDelete->data);
            free(toDelete);
            printf("Successfully Deleted first Node\n");
        }
    }
}

void traverseList()
{
    struct node *temp;

    if(head==NULL)
    {
        printf("List is Empty!");
        return;
    }
    temp = head;
    while(temp!=NULL)
    {
        printf("Data = %d\n",temp->data);
        temp=temp->next;
    }
}

