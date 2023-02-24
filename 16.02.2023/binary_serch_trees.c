#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *r;
    struct node *l;
};

struct node *creatnode(int data ){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->l = NULL;
    p->r = NULL;
    return p;
}

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->l);
        printf("%d ", root->data);
        inOrder(root->r);
    }
}

int isBST(struct node* root){
    static struct node * prev = NULL;
    if (root!=NULL){
        if(!isBST(root->l)){
            return 0;
        }
        if(prev!=NULL && root->data < prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->r);

    }else{
        return 1;
    }
}

int main (){
    struct node * n1 = creatnode(5);
    struct node * n2 = creatnode(3);
    struct node * n3 = creatnode(6);
    struct node * n4 = creatnode(1);
    struct node * n5 = creatnode(7);

    n1->l = n2;
    n1->r = n3;

    n2->l = n4;
    n3->r = n5;

    inOrder(n1);


    return 0;
}