/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void LLt(struct node *head){
    struct node*ptr = head;
    do{
        printf("element is %d\n",ptr->data);
        ptr= ptr->next;
    }while (ptr!=head);
}
struct node * insertAtfirst(struct node *head, int data){
    struct node *ptr;
    struct node *p = head->next;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    
    while(p->next !=head){
        p = p->next;
    }
    
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    
    return head;
    
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = head;
    
    LLt(head);
    head = insertAtfirst(head,0);
    LLt(head);
    
    
    
    
    return 0;
}
