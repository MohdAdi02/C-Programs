//program for single link list
// traversal, insertion, deletion
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next; 

};


void insert(int x,struct node *head){

    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    newnode ->data = x;
    newnode->next = NULL;

    if (head==NULL){
        head=newnode;
    }else{
        struct node *p;
        p=head;
        while(p->next!=NULL){

            p=p->next;
        }
        p->next=newnode;
    }  
        
}

/*void traverse(struct node *head){
    if (head != NULL){
    struct node *p;
    p = head;
       while(p != NULL){
       printf("%d\n",p->data);
       p = p-> data;
       }
    }
          else {
          printf("empty");

          }
    }

}
*/
//void delete_from_end(struct node *head){



//}

int main(){

    int choice;
    struct node *head = NULL;
    int num;


    while(1){
        printf("Enter a choice\n");
        printf("Insert element in list\n");
        printf("Traverse link list");
        printf("Delete an element from end");
        printf("Exit");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter the element to add in linklist");
                    scanf("%d",&num);
                    insert(num,head);
                break;
            case 2: //traverse(head);
                break;
            case 3: //delete_from_end(head);
                break;
            case 4:exit(0);
                break;
        }

    }
    



    return 0;
}