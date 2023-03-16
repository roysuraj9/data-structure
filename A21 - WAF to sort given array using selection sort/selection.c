#include "main.h"

data_t selection(data_t *arr, data_t size )
{
       //initailize variables
       data_t current_min, current_item, j, temp;
       
       //moving one by one
       for(j = 0; j < size - 1; j++)
       {
	      current_min = j;
	      
	      for(current_item = j + 1; current_item < size; current_item++)
	      {
	      //find the minimum element in array
		     if(arr[current_item] < arr[current_min])
		     {
			    current_min = current_item;
		     }
	      }
	      //minimum change then swap the element
 	      if(current_min != j)
	      {
		     temp = arr[j];
		     arr[j] = arr[current_min];
		     arr[current_min] = temp;
	      }
       }
}
