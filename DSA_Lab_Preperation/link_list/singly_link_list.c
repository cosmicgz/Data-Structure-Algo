#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_begening()
{
    int temp;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Insert Data : ");
    scanf("%d",&temp);
    newNode->data = temp;
    newNode->next =head;
    head = newNode;
}

void insert_end()
{
    int tem;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    temp=head;
    if (head==NULL)
    {
        printf("Insert Data : ");
        scanf("%d",&tem);
        newNode->data = tem;
        newNode->next =head;
        head = newNode;
    }
    
    else
    {
        printf("\n\nElements in List :\n");
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        
        printf("Insert Data : ");
        scanf("%d",&tem);
        newNode->data=tem;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void insert_between()
{
    int index,i=0,tem;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    temp=head;
    printf("\nAt which index you want to insert node : ");
    scanf("%d",&index);

    while (i<index-2)
    {
        temp=temp->next;
        i++; 
    }
    
    if (temp->next==NULL)
    {
        printf("\nIndex not founded\n");
    }
    else
    {
        printf("Insert Data : ");
        scanf("%d",&tem);
        newNode->data=tem;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
}
void display()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp=head;
    if (temp==NULL)
    {
        printf("\nList is Empty\n");
    }
    
    else
    {
        printf("\n\nElements in List :\n");
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("\n");
        
    }
}

int main()
{
    while (1)
    {
        int choice;
        printf("\n\nWhat do you want to do : \n1. Insert at begening\n2. Insert at End\n3. Insert between Node\n4. Display \n0. Exit\n\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insert_begening();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_between();
            break;
        case 4:
            display();
            break;
        
        default:
        printf("\nInvalid choice\n");
            break;
        }
    }
    

}