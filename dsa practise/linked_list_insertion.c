// insertion of linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *add_beg(struct node *head, int d1)
{
struct node *ptr = malloc(sizeof(struct node));
ptr->data = d1;
ptr->next = NULL;
ptr->next = head;
head = ptr;
return head;
}
void addpos(struct node *head,int data,int position){
    struct node *ptr =head;
    struct node *ptr2=malloc(sizeof(struct node ));
   ptr2->data=data;
   ptr2->next=NULL;
   position--;
   while(position!=1)
   {
       ptr=ptr->next;
       position--;
   }
   ptr2->next=ptr->next;
   ptr->next=ptr2;
}
void addend(struct node *head,int data)
{
    struct node *ptr ,*temp;
    ptr = head;
    temp =(struct node*)malloc(sizeof (struct node ));
    temp->data=data;
    temp->next =NULL;
 while (ptr->next !=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}

int main()
{
struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;
    addend(head,98);
    addend(head,3);
    struct node *ptr = malloc(sizeof(struct node));
  ptr->data = 98;
  ptr->next = NULL;
   head->next = ptr;
   int data = 3;
head = add_beg(head, data);
    ptr = head;
   int data=33,position=3;
   addpos(head,data,position);
    while (ptr != NULL)
    {
     printf("%d\n", ptr->data);
     ptr = ptr->next;
    }
return 0;
}