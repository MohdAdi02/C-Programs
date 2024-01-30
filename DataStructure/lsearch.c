#include<stdio.h>
int lsearch(int a[],int n, int x){
    int i;
    for(i=0; i<n; i++){
        if(a[i] == x){
            return i;
        }
    }    
     return -1;

}
int main(){
    int n;
    int i;
    printf("enter the size of array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elemnet in the array\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("enter the finding number\n");
    scanf("%d",&x);

    int found = lsearch(a,n,x);

    if (found == -1){
        printf("number not found in the array \n");
    }else{
        printf("number found at index %d\n",found);
    }
    return 0;
}