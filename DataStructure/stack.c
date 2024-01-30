#include<stdio.h>
# include<stdlib.h>
# define N 10
int stack [N];
int top = -1;
void push (){
    int x;
    printf("enter the data\n");
    scanf("%d",&x);
    if(top == N-1){
        printf("stack is overflow\n");
    }else{
        top = top+1;
        stack [top] = x;
    }
}
void pop (){
    int item;
    if(top == -1){
        printf("stack is underflow condition\n");
    }else{
        printf("the poped item is %d\n",stack[top]);
        top = top-1;
    }   
}
void display(){
    int i;
    printf("displayed item is\n");
    for(i=top; i>=0; i--){
        printf("%d\n",stack[i]);
    }
}
void  main (){
    int choice;
    while(1){
        printf("Enter the choice \n");
        printf("press :1 for push operation\n");
        printf("npress :2 for pop operation\n");
        printf("press :3 for display\n");
        printf("press:4 for exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default: printf("invalid choice\n");
        }
    }
}    