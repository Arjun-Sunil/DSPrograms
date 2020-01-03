#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void addnode();
void display();
void reverse();
void sort();
void main()
{
    addnode();
    addnode();
    addnode();
    display();
    reverse();
    printf("\n");
    display();
    sort();
    printf("\n");
    display();
}
void addnode()
{
        struct node *ptr, *temp;
        int item;
        ptr= (struct node*)malloc(sizeof(struct node));
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
                ptr->next=NULL;
                head=ptr;
        }
        else
        {
                temp=head;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=ptr;
                ptr->next=NULL;
        }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
            printf("%d",temp->data);
            temp=temp->next;
    }
}
void reverse()
{
        struct node *current,*next,*prev;
        current=head;
        next=NULL;
        prev=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
}

void sort()
{ 
    struct node* temp = head; 
  
    // Traverse the List 
    while (temp) { 
        struct node* min = temp; 
        struct node* r = temp->next; 
  
        // Traverse the unsorted sublist 
        while (r) { 
            if (min->data > r->data) 
                min = r; 
  
            r = r->next; 
        } 
  
        // Swap Data 
        int x = temp->data; 
        temp->data = min->data; 
        min->data = x; 
        temp = temp->next; 
    } 
} 
