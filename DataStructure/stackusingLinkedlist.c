#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(){
    struct node *newnode;
    int x;
    printf("enter the data in stack\n");
    scanf("%d",&x);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;    
}
void pop(){
    if(top == NULL){
        printf("stack is empty\n");
    }else{
        struct node *p;
        p = top;
        printf("poped element is %d \n",top->data);
        top = top->next;
        free(p);
    }
}
void display(){
    if(top == NULL){
        printf("list is empty\n");
    }else{
        struct node *p;
        p = top;
        printf("Element in the stack is\n");
        while(p != NULL){
            printf("%d\n",p->data);
            p = p->next;
        }
    }
}
int main(){
    int choice;
    while(1){
        printf("   Enter the choice\n");
        printf("1: for push operation\n");
        printf("2: for display operation\n");
        printf("3: for poping element operation\n");
        printf("4: for exitting program\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
            break;
            case 2: display();
            break;
            case 3: pop();
            break;
            case 4: exit(0);
            default :
            printf("enter a valid choice\n");
        }
    }
   
}