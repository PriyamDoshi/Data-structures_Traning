#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node * right;
   struct node * left;
};

 struct node *creatnode( int data ){
  struct node *a;
  a = (struct node*)malloc(sizeof(struct node));
  a->data = data;
  a->right = NULL;
  a->left = NULL;
  return a;
}

int main (){
    struct node *p = creatnode(2); 
    struct node *p2 = creatnode(32);
    struct node *p3 = creatnode(2);
    struct node *p4 = creatnode(3);

    p->left = p2;
    p->right = p3;
    p2->left = p4;
    
    return 0;
}