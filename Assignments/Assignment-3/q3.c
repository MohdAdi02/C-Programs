#include<stdio.h> // find square
int main(){
    int a[500];
    int i;
    int n;
    for(i= 0; i < 500; i++){
        a[i] = i*i;
        printf("%d\n",a[i]);
    }
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",a[n]);
    return 0;
}