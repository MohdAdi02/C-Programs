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
printf("Enterthe number\n");
scanf("%d",&number);
for(int i = 0; i < number; i++)
 printf(" %d",fabonacci(i));
return 0;
}