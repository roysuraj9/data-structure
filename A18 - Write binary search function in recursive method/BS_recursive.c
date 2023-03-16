#include "main.h"

/* Function to search the element using binary search */
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
       //declare vaiable
       data_t  mid;
       
       //find mid by this formula
       mid = (first + last) / 2;
       
       //if element of mid is equal to key
       if(key == arr[mid])
       {
	      return mid;
       }
       
       //if key is smaller than mid element
       //shift the search to left side by update last position
       else if(key < arr[mid])
       {
	      last = mid - 1;
       }
       //if key is greater than mid element
       //shift the search to right side by update first position
       else
       {
	      first = mid + 1;
       }
       
       //if first is smaller than last call function
       if(first <= last)
       {
	      binarySearch_recursive(arr, size, key, first, last);
       }
       //when data is not present
       else
       {
	      return DATA_NOT_FOUND;
       }
}
