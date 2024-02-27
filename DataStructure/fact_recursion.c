#include<stdio.h>
//factorial ising recursion
int factorial(int number){
    if(number == 1){
        return 1;
    }else {
        return number*factorial(number-1);
    }
}
int main(){
    int n;
    int fact;
    printf("enter the number: ");
    scanf("\n%d",&n);
    fact = factorial(n);
    printf("%d",fact);
    return 0;
}