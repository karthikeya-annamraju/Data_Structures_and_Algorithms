#include<stdio.h>

int BinarySearch(int arr[], int n, int key) {
	int low, mid, high;
	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low + high)/2;
		if (arr[mid] == key) return mid;
		else if (arr[mid] < key) low = mid + 1;
		else high = mid - 1; 
	}
	return -1;
}

int main()
{
    int arr[100],i,n;
    printf("Enter the size of array: ");
	scanf("%d",&n);
    printf("Enter the array elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
    printf("Enter the key element: ");
	scanf("%d", &key);
	int res = BinarySearch(arr, n, key);
	//printf("Sorted Array : \n");
	//printarray(arr, n);
	(res == -1)
	? printf("Element not found")
	: printf("Element found at index %d", res);
	return 0;
}