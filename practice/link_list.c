#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *next;
    };

    void display(struct node *head){
        if(head != NULL){
            struct node *p;
            p = head;

            while (p!= NULL){
                printf("%d\n",p->data);
                p = p->next;
            }
        }else {
            printf("link list is empty\n");
        }
    }
    void main(){
        struct node *head;
        head = NULL;
        display (head);


        struct node *new;
        struct node *first;
        struct node *second;


        // allocate memory for nodes in link list in heap.

        
        head = (struct node*)malloc(sizeof(struct node));
        new = (struct node*)malloc(sizeof (struct node));
        first = (struct node*)malloc(sizeof(struct node));
        second = (struct node*)malloc(sizeof(struct node));

        // link first node to second node.
        head -> data = 5;
        head ->next = new;
        

        //link second node to third node
        new -> data = 10;
        new ->next = second;
        

        //link third node to end point.
        second ->data = 20;
        second ->next = NULL;

      

        
        display(head);
    }

