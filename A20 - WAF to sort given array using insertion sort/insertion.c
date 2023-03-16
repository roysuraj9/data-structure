/*
Name : Suraj Roy
Date :14/11/2022
Description : 
*/
#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
       //declare variable
       data_t i, j, key;
       
       //assign key
       for(i = 1; i < size; i++)
       {
	      key = arr[i];
	      j = i - 1;
	      
	      //if key is smaller than early element
	      while (j >= 0 && arr[j] > key)
	      {
		     //update the position of greater element
		     arr[j + 1] = arr[j];
		     j = j - 1;
	      }
	      arr[j + 1] = key;
       }
       return 0;
}
