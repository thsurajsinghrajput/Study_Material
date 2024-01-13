#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *privious; 
};

void display(struct node *head){
    struct node *ptr=head;
    do
  {
    printf(" %d->", ptr->data);
    ptr = ptr->next; // Traversing the List till end

    
  } while (ptr!=head);
    
}


int main (){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *secound = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->privious = fourth;
    head->data = 1;
    head->next = secound;

    secound->privious = head;
    secound->data = 2;
    secound->next = third;

    third->privious = secound;
    third->data = 3;
    third->next = fourth;

    fourth->privious = third;
    fourth->data = 4;
    fourth->next = head;



    display(head);

}
