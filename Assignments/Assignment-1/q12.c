#include<stdio.h>
#include<stdlib.h>

void main(){

    int option;
    int num1, num2;
    int result;


    while(1){
        printf("Choose an option\n 1)Add \n 2)Multiply\n 3)subtract\n 4)divide\n 5)exit\n") ;
        scanf("%d",&option);
        if(option<=5){
            printf("Enter first number: ");
            scanf("%d",&num1);
            printf("Enter second number: ");
            scanf("%d",&num2);
        }
        switch(option){
            case 1: 
                result = num1 + num2;
                break;
            case 2:
                result = num1 * num2;
                break;
            case 3: 
                result = num1 - num2;
                break;
            case 4:
                result = num1 / num2;
                break;
            case 5: exit (0);    
            default:printf("invalid choice");
        }
        printf("Result is %d\n",result);
    }

}