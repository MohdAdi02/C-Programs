#include<stdio.h>
#include<stdlib.h>
// insertion at the end insertion at the front insertion in ascending order of value reverse the linklist search an element
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;


void insert(){
    struct node *newnode;
    int x;
 
    printf("enter the data in the linklist\n");
    scanf("%d",&x);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if(head == NULL){
         head = newnode;
    }else{
        struct node *p;
        p = head;
        while(p->next !=NULL){
            p=p->next;

        }
        
        p->next = newnode;
        
    }
}
void traverse(){
    if(head != NULL){
        struct node *p;
        p=head;
        printf("Displayed element is \n");
        while(p!=NULL){
            
            printf("%d\n",p->data);
            p=p->next;
        }
    }else{
        printf("link list is empty");
    }
}
void deletion_end(){
    struct node *p;
    struct node *pnode;
    p = head;
    while(p->next!= NULL){
        pnode = p;
        p = p->next;
    }
    pnode->next = NULL;
    free(p);
}
void delete_begining(){
    struct node *p;
    if(head == NULL){
        printf("list is empty");
    }else{
    p = head;
    head = head->next;
    free(p);
    }
}
void insert_at_begining(){
    struct node *newnode;
    int x;
    printf("Enter the value u want to print\n");
    scanf("%d",&x);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}
void insertend(){
    struct node *p;
    struct node *newnode;
    int x;
    printf("enter the value you want to print in node\n");
    scanf("%d",&x);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    p = head;
    while(p->next!= NULL){
        p = p->next;
    }
    p->next = newnode;
}
void insertatgivenposition(){
    int pos;
    int i =1;
    int count;
    struct node *newnode;
    struct node *p;
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos > count){
        printf("enter valid position\n");
    }else{
        p = head;
        while(i<pos){
            p=p->next;
            i++;
        }
        newnode=(struct node *)malloc(sizeof(struct node));
        int x;
        printf("entetr the value u want to print in list\n");
        scanf("%d",&x);
        newnode->data = x;
        newnode->next= p->next;
        p->next = newnode;
    }
}
void getlenght(){
    int count = 0;
    struct node *p;
    if(head == NULL){
        printf("empty");
    }else{
        p=head;
        while(p !=NULL){
            count++;
            p= p->next;
        }
        printf(" lenght of the link list is %d\n",count);
    }
}
void deleteagivenposition(){
    int pos;
    int i = 1;
    struct node *p;
    struct node *nextp;
    printf("enter the position\n");
    scanf("%d",&pos);
    p= head;
    while(i<pos-1){
        p = p->next;
        i++;
    }
    nextp=p->next;
    p->next = nextp->next;
    free(nextp);
}
void reverse(){
    struct node *pnode;
    struct node *cnode;
    struct node *nnode;
    pnode = NULL;
    cnode = nnode = head;
    while(nnode!=NULL){
        nnode = nnode->next;
        cnode->next = pnode;
        pnode = cnode;
        cnode = nnode;
    }
    head = pnode;
}
void searching(){
    int number;
    int success =0;
    printf("enter the number\n");
    scanf("%d",&number);
    struct node *p;
    if(head == NULL){
        printf("there is no node\n");
    }else{
        p = head;
        while(p!=NULL){
           if(p->data == number){
            success = 1;
            break;
           }
        p=p->next;
       }
    }
    if(success==1){
        printf(" number %d found in the list\n",number);
    }else{
        printf("number not found in the list\n");
    }
    
}

void main(){
    int choice;
    int number;
    while(1){
        printf("Enter the choice\n");
        printf("1:Insert\n");
        printf("2:Deletion from end\n");
        printf("3:Deletion begining\n");
        printf("4Traverse\n");
        printf("5:inserta node at begining\n");
        printf("6:insert a node at the end\n");
        printf("7:for finding lenght\n");
        printf("8:insert a node at given position\n");
        printf("9:delete node at a givven position\n");
        printf("10:reverse linked list\n");
        printf("11: for searching\n");
        printf("12:Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:insert();
            break;
            case 2:deletion_end();
            break;
            case 3:delete_begining();
            break;
            case 4:traverse();
            break;
            case 5:insert_at_begining();
            break;
            case 6:insertend();
            break;
            case 7:getlenght();
            break;
            case 8:insertatgivenposition();
            break;
            case 9:deleteagivenposition();
            break;
            case 10:reverse();
            break;
            case 11: searching();
            break;
            case 12: exit(0);
            default:printf("enter the valid choice\n");
        }
    }
}


