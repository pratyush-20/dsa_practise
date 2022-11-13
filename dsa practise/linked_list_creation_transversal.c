
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; // ek structure jiske and ek or copy h structure kaa
};

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
     head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // link karo first or second ko
    head->data = 7;
    head->next = second;
    // link second and third
    second->data = 8;
second->next=third;
//terminate 
head->data=9;
head->next=NULL;
    return 0;
}