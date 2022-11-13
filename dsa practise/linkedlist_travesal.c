#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttransverse(struct node *ptr)
{
    while (ptr != NULL){
        printf("ELEMENTS %d\n", ptr->data); // ptr  ka data{node ka} not adress
    ptr = ptr->next;}
}
void insertion(int )
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = NULL;
    linkedlisttransverse(head);
    return 0;
}