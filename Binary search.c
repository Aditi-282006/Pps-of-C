#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number found at position %d\n", i + 1);
            break;
        }
    }

    if(i == n) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
