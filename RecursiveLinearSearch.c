#include<stdio.h>

// Recursive approach
int LinearSearch(int arr[], int n, int key) {
    if (n < 0) {
        return -1;
    }
    if (arr[n-1] == key) {
        return n-1;
    }
    return LinearSearch(arr, n-1, key);
}

int main(){
    int arr[100], key, n;
    printf("Enter the Size of Array:");
    scanf("%d", &n);
    printf("Enter the Array elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element:");
    scanf("%d", &key);
    int res = LinearSearch(arr, n, key);
    (res == -1)
    ? printf("Element not found in the array")
    : printf("Element found at index %d", res);
}