#include "main.h"

data_t bubble(data_t *arr, int size )
{
       data_t i, j, temp;
       for( i = 0; i < size; i++)
       {
    	      for(j = 0; j < size-1-i; j++)
    	      {
    	      //if first element greater than second
     		     if(arr[j] > arr[j + 1])
     		     {
     		     //swap the nelement
      			    temp = arr[j]; 
			    arr[j] = arr[j + 1];
			    arr[j + 1] = temp;
		     }
	      }
       }
     return 0;  
}
