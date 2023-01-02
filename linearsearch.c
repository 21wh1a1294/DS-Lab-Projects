#include <stdio.h>

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
int main()
{
    int arr[50], n, i, x;
    printf("enter array size:");
    scanf("%d", &n);
    printf("enter array elements:");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("enter element to search:");
    scanf("%d", &x);
	int result = search(arr, n, x);
	if(result == -1)
		printf("Element is not present in array");
	else	
		printf("Element is present at index %d", result+1);
	return 0;
}


