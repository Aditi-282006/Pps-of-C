#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid;

    printf("Enter number of elements (sorted): ");
    scanf("%d", &n);

    printf("Enter %d sorted integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Number found at position %d\n", mid + 1);
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(low > high) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
