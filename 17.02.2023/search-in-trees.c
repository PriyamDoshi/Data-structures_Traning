#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *l;
    struct node *r;
};

struct node *creatnode(int data ){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->l = NULL;
    p->r = NULL;
    return p;
}

void preOrder(struct node* root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->l);
        preOrder(root->r);
    }
}

void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->l);
        postOrder(root->r);
        printf("%d ", root->data);
    }
}

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->l);
        printf("%d ", root->data);
        inOrder(root->r);
    }
}

struct node * search(struct node * root, int key   ){
     if(root == NULL){
        return NULL;
     }
     if(key == root->data){
        return root;
     }
    else if(key<root->data){
         return search(root->l, key);
     }
     else{
        return search(root->r, key);
     }
}

int main (){
    struct node * n1 = creatnode(3);
    struct node * n2 = creatnode(2);
    struct node * n3 = creatnode(4);
    struct node * n4 = creatnode(1);
    struct node * n5 = creatnode(5);

    n1->l = n2;
    n1->r = n3;

    n2->l = n4;
    n3->r = n5;

    preOrder(n1);
    
    printf("\n");

    postOrder(n1);
    printf("\n");
    inOrder(n1);
    printf("\n");

    struct node * n = search(n1,6);
    if(n != NULL){
        printf("element found %d", n->data);
    }else{
        printf("element not found");
    }

    
    return 0;
}