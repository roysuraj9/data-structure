#include "main.h"


/* Function to partition the array */
int partition(int *arr, int first, int last)
{
      //initailize variables
       int pivot = first, p = (first + 1), q = last, temp;

       
       do
       {
	      //increement p while element is smaller than pivot
	      while(arr[p] <= arr[pivot])
	      {
		     p++;
	      }
	      //decreement q while element is greater than pivot
	      while(arr[q] > arr[pivot])
	      {
		     q--;
	      }
	      //if p smaller than q
	      if(p < q)
	      {
		     //swap element
		     temp = arr[p];
		     arr[p] = arr[q];
		     arr[q] = temp;
	      }
       }
       //checking condition
       while(p < q);
       //swap element
       temp = arr[pivot];
       arr[pivot] = arr[q];
       arr[q] = temp;

       return q;
}
