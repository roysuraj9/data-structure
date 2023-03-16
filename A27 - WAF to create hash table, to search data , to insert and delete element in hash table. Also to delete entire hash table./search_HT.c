#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
       int index = data % size;
       if(arr[index].value == data)
       {
	      return SUCCESS;
       }

       hash_t *temp = arr[index].link;

       while(temp != NULL)
       {
	      if(temp -> value == data)
	      {
		     return SUCCESS;
	      }
	      temp = temp -> link;
       }
       return DATA_NOT_FOUND;
}
