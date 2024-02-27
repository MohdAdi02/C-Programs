#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *p;

void creation(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;

    if(head == NULL){
        head = newnode;
    }else{
        
        p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = newnode;
        newnode->prev = p;
        p = newnode;
    }
}
void traverse(){
    if(head == NULL){
        printf("Linklist is empty\n");
    }else{
       
        p = head;
       printf("Displayed element is \n");
        while(p != NULL){
            printf("%d\n",p->data);
            p = p->next;
        }
    }
}
void insertatbegining(){
    
    
    struct node *newnode;
    newnode= (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if(head == NULL){
        head = p = newnode;
    }else{
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}
void insertatend(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data \n");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    p= head;
    while(p->next!= NULL){
        p = p->next;
    }
    p->next = newnode;
    newnode->prev = p;
    p = newnode;
}

void getlenght(){
    int count = 0;
    if(head == NULL){
       printf("list is empty\n");
    }else{
        p = head;
        while(p!= NULL){
            count++;
            p = p->next;
        }
        printf("Lenght of link list = %d\n",count);
    }

}
void insertatpos(){
    int pos;
    int i = 1;
    int count;
    printf("Enter position\n");
    scanf("%d",&pos);
    if(pos>count){
        printf("invalid position\n");
    }else if(pos == 1){
        insertatbegining();
    }else{
        struct node *newnode;
        p = head;
        while(i<pos-1){
            p = p->next;
            i++;
        }
        int x;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data \n");
        scanf("%d",&x);
        newnode->data = x;
        newnode->prev = NULL;
        newnode->next = NULL;
        newnode->prev = p;
        newnode->next = p->next;
        p->next = newnode;
        newnode->next->prev = newnode;
    }
}
void afteragivenpos(){
    int count;
    int i = 1;
    int pos;

    if(pos>count){
        printf("invalid positiion\n");
    }else{
         printf("enter the position\n");
         scanf("%d",&pos);
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        p = head;
        while(i<pos){
            p = p->next;
            i++;
        }
        newnode->prev=p;
        newnode->next=p->next;
        p->next = newnode;
        newnode->next->prev = newnode;
    }
}
void main(){
    int choice;
    while(1){
        printf("Enter the choice\n");
        printf("1: for creation\n");
        printf("2: for showing\n");
        printf("3: for insert at begining\n");
        printf("4: for isert at end\n");
        printf("5: for findig lenght of list\n");
        printf("6: for insert at a specific postion\n");
        printf("7: insert after a given position\n");
        printf("8: for exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: creation();
            break;
            case 2: traverse();
            break;
            case 3: insertatbegining();
            break;
            case 4: insertatend();
            break;
            case 5: getlenght();
            break;
            case 6: insertatpos();
            break;
            case 7: afteragivenpos();
            break;
            case 8: exit(0);
            default: printf("Enter the valid choice\n");
        }
    }

}