#include "main.h"

/* Function for binary search using iterations */
data_t binarySearch_iterative(data_t *arr, data_t size, data_t key)
{
  //initailize variable
  data_t mid, low = 0, high = (size - 1);   
  
  //condition for entering in loop
   while(low <= high)
   {
	  //find mid by this formula
	  mid = (high + low) / 2;
	  //if element of mid is equal to key return position
	  if(arr[mid] == key)
	  {
		 return mid;
	  }
	  //if key is smaller than mid element
       //shift the search to left side by update high position
	  else if(key < arr[mid])
	  {
		high = mid -1;
	  }
	  //if key is greater than mid element
       //shift the search to right side by update low position
	  else
	  {
		 low = mid + 1;
	  }
   }
   //when data is not present
   return DATA_NOT_FOUND;
}
