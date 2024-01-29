#include<stdio.h>
int factorail(int number){
    if(number == 1){
        return 1;
    }else {
        return number*factorial(n-1);
    }
}
int main(){
    int n;
    int fact;
    printf("enter the number: ");
    scanf("\n%d",&n);
    fact = factorial(n);
    return 0;
}