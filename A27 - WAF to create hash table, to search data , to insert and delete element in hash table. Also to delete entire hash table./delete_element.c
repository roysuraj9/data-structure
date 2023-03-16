#include"hash.h"

int delete_element(hash_t *arr, int data, int size)
{
       int index = data % size;
       hash_t *temp = arr[index].link, *prev;
       if(arr[index].value == data)
       {
	      arr[index].value = -1;
	      if(arr[index].link != NULL)
	      {
		     arr[index].value = temp -> value;
		     arr[index].link = temp -> link;

	      }
	      return SUCCESS;
       }
       else
       {
	      //hash_t *temp = arr[index].link, *prev;
	      //prev = temp;
	      if(temp -> value == data)
	      {
		     arr[index].link = temp -> link;
		     free(temp);
		     return SUCCESS;
	      }
	      prev = temp;
	      temp = temp -> link;
	      while(temp)
	      {
		     if(temp -> value == data)
		     { 
			    prev -> link = temp -> link;
			    free(temp);
			    return SUCCESS;
		     }
		     prev = temp;
		     temp = temp -> link;
	      }
       }
       
       return DATA_NOT_FOUND;
}
