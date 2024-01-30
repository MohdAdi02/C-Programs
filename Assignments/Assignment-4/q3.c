#include <stdio.h>

int main() {
    int n, target, found;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &target);

     found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Number %d found at index %d.\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}