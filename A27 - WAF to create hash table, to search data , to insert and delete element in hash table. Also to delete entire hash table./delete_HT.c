#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
       for(int i = 0; i < size; i++)
       {
	      hash_t *temp, *temp1;
	      if(arr[i].value != -1)
	      {
		     temp = arr[i].link;
		     arr[i].value = -1;
		     arr[i].link = NULL;
	      }

	      while(temp)
	      {
		     temp1 = temp -> link;
		     free(temp);
		     temp = temp1;
	      }
       }
       return SUCCESS;
}
