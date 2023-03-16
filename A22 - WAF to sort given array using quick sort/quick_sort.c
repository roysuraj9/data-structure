#include "main.h"

/* Function to sort the array in quick sort method */
int quick_sort( int *arr, int first, int last )
{
       //declare variable
       int index;
       //checking condition
       if(first < last)
       {
	      //call functions
	      index = partition(arr, first, last);
	      quick_sort(arr, first, (index - 1));
	      quick_sort(arr, (index + 1), last);
       }
}
