// C program for Binary Search
#include <stdio.h>
int binarySearch(int arr[], int l, int h, int x)
{
	while (l <= h) {
		int m = l + (h - l) / 2;
		// Check if x is present at mid
		if (arr[m] == x)
			return m;
		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;
		// If x is smaller, ignore right half
		else
			h = m - 1;
	}
	return -1;
}
int main()
{
	int arr[50], n, x, i;
	printf("enter array size:");
	scanf("%d", &n);
	printf("enter arrray elements:");
	for(i=0; i<n; i++)
	    scanf("%d", &arr[i]);
	printf("enter element to search:");
	scanf("%d", &x);
	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1) 
	    printf("Element is not present in array");
	else
	    printf("Element is present at index %d",result+1);
	return 0;
}


