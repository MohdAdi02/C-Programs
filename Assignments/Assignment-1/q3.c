#include <stdio.h>

int main() {
    int i;
    int even = 0;
    int odd = 0;
    int a[4];
    printf("Enetr the elements in the array\n");
    for(i=0; i< 4; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
            even++;
        else
             odd++;
        
    }
      printf(" total even elemnets is %d\n",even);
      printf(" total odd number of elemnets is %d\n",odd);
   
    return 0;
}