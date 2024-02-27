#include<stdio.h>
int fabonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fabonacci(n-1)+fabonacci(n-2);
    }
}
int main(){
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    for(int n = 0; n < number; n++)
    printf(" %d",fabonacci(n));
    return 0;
}