#include<stdio.h>
int main(){
    int number;
    int remainder;
// reverse a integer number

    printf("Enter the number:");
    scanf("%d",&number);


    while(number > 0){
        remainder = number % 10;
        printf("%d",remainder);
        number = number / 10;
    }


    return 0;
}