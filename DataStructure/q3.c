//finding a number in a array of size fo n..

# include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("\n%d",&n);
    int a[n];
    int i;
    int number;
    printf("enter the lement in the array:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number to find:");
    scanf("%d",&number);

    for(i = 0; i<n; i++){
        if(a[i] == number){
            printf("number %d found at index %d",number, i);
        return 0;
           
        }
    }
     printf("number not found:");
    
    return 0;
}