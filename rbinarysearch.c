#include <stdio.h>
int rBinarySearch(int array[], int start_index, int end_index, int element){
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return rBinarySearch(array, start_index, middle-1, element);
	     return rBinarySearch(array, middle+1, end_index, element);
   }
   return -1;
}
int main(void){
	int n, i, array[50], element;
	printf("enter size of array :");
	scanf("%d", &n);
	printf("enter elements of array:");
	for(i=0; i<n; i++)
		scanf("%d", &array[i]);
	printf("enter element to search :");
	scanf("%d", &element);
   int found_index = rBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}
