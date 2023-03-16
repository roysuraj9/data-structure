#include "main.h"

int merge_sort(int *array, int narray)
{
       int i;
       //stop condition if array size become 1
       if(narray == 1)
       {
	      return 1;
       }
       //finding mid position of array
       int mid = narray / 2;

       //allocation left side array
       int *lsa = malloc(narray *sizeof(int));
       //checking memory allocated or not
       if(lsa == NULL)
       {
       return FAILURE;
       }
       //copy element from user enter array to left side array
       for(i = 0; i < mid; i++)
       {
	      lsa[i] = array[i];
       }
       //allocation right side array
       int *rsa = malloc((narray - mid) * sizeof(int));
       //checking memory allocated or not
       if(rsa == NULL)
       {
       return FAILURE;
       }
       
       //copy element from user enter array to right side array
       for(i = mid; i < narray; i++)
       {
	      rsa[i - mid] = array[i];
       }
       //function calls
       merge_sort(lsa, mid);
       merge_sort(rsa, narray - mid);
       merge(array, narray, lsa, mid, rsa, narray - mid);
}
