#include<stdio.h>
#include<stdlib.h>

  struct node *f = NULL;
  struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};

void llt(struct node *ptr){

    printf("printing number\n");
    while (ptr!=NULL)
    {
        printf("Element id %d\n",ptr->data);
        ptr = ptr->next;
    }

}


int deQueue(){
    int val = -1;
    struct node *p =f;
    if (f == NULL ){
        printf("is empty");
    }else{
        f = f->next;
        val = p->data;
        free(p);
    }
    return val;

}


void enQueue( int val){
struct node *n = (struct node*)malloc(sizeof(struct node));
if(n==NULL){
    printf("queue is full");
}else{
    n->data = val;
    n->next = NULL;
    if(f==NULL){
         f=r=n;
    }
    else{
        r->next = n;
        r=n;
    }
}

}



int main(){
    
    printf("no bugs\n");

    printf("dequeue %d\n",deQueue());

    llt(f);
    enQueue(34);
    enQueue(3);
    enQueue(4);
    enQueue(123);
    printf("dequeue %d\n",deQueue());
    llt(f);


    return 0;
}