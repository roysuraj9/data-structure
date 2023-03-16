#include "main.h"


void merge(int *array, int narray, int *left, int nleft, int *right, int nright)
{
       //initailze variables
       int i = 0, j  = 0, k = 0;

       //check position left and right aaray
       while(i < nleft && j < nright)
       {
	      //if left array element smaller than right copy left element in array
	     if(left[i] < right[j])
	     {
		   array[k] = left[i];
		   i++;
	     }
	     //right array smaller then copy right element in array
	     else
	     {
		    array[k] = right[j];
		    j++;
	     }
	     k++;
       }
       //if some leftover element remain in right array copy them in array
       while(j < nright)
       {
	      array[k] = right[j];
	      j++;
	      k++;
       }
       //if leftover remain in left array store copy in array
       while(i < nleft)
       {
	      array[k] = left[i];
	      i++;
	      k++;
       }
       //freeing left and right array
       free(left);
       free(right);
}
