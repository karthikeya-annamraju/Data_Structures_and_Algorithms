#include<stdio.h>

// Non-Recursive approach
int LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
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