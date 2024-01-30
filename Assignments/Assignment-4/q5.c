//ceate a stack of size 10 for storing integer value.
#include <stdio.h>
# include<stdlib.h>
# define N 10
int stack[N];
int top = -1;
void push(){
    int x;
    printf("enetr the data:");
    scanf("%d",&x);
    if(top == N-1){
        printf("overflow condition\n");
    }else{
        top = top +1;
        stack [top] = x;
    }
}
void pop(){
    int item;
    if(top == -1){
        printf("underflow condition\n");
    }else{
        printf("the poped item is %d\n",stack[top]);
        top=top-1;
    }
}
void peak(){
    if(top == -1){
        printf("stack is empty\n");
    }else{
        printf("the topmost elemnet is %d\n",stack[top]);
    }
}
void display(){
    int i;
    for(i=top; i>=0; i--){
        printf("%d\n",stack[i]);
    }
}
void main() {
   int ch;
   while(1){
       printf("enter the choice\n");
       printf("1:push\n");
       printf("2:pop\n");
       printf("3:peak\n");
       printf("4:display\n");
       printf(" 5:exit\n");
       scanf("%d",&ch);
       switch(ch){
           case 1:push();
           break;
           case 2:pop();
           break;
           case 3:peak();
           break;
           case 4:display();
           break;
           case 5:exit(0);
           default:printf("invalid choice\n");
       }
    }
}       
    




    

    