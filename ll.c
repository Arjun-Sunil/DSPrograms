#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
}*head;
void lastinsert();
void display();
void reverse();
void main()
{
    lastinsert();
    lastinsert();
    lastinsert();
    lastinsert();
    display();
    reverse();
    display();
}
void lastinsert()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("%d->",ptr->data);  
            ptr = ptr -> next;  
        }  
        printf("\n");
    }  
}     
void reverse() 
{ 
    struct node* prev = NULL; 
    struct node* current = head; 
    struct node* next = NULL; 
    while (current != NULL) { 
        // Store next 
        next = current->next; 
  
        // Reverse current node's pointer 
        current->next = prev; 
  
        // Move pointers one position ahead. 
        prev = current; 
        current = next; 
    } 
    head = prev; 
} 