#include<stdio.h>

int BinarySearch(int arr[], int n, int key) {
	int low, mid, high;
	low = 0;
	high = n-1;
		if (low > high) {
            return -1;
        }
        mid = low + ((high - low)/2);
		if (arr[mid] == key) return mid;
		else if (arr[mid] < key) return BinarySearch(arr, n+1, key);
		else if (arr[mid] > key) return BinarySearch(arr, n-1, key);
        else return -1;
}

int main()
{
    int arr[100],i,n;
    printf("Enter Array Size: ");
	scanf("%d",&n);
    printf("Enter Array Elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
    printf("Enter the Key Element: ");
	scanf("%d", &key);
	int res = BinarySearch(arr, n, key);
	(res == -1)
	? printf("Element not found")
	: printf("Element found at index %d", res);
	return 0;
}