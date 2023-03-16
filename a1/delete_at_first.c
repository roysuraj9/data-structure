#include "sll.h"

int sl_delete_first(Slist **head)
{
       //check for list empty or not

       if(*head == NULL)
       {
	      return FAILURE;
       }
       //create local reference pointer
       Slist *temp = *head;

      *head = temp -> link;

       //free first node
       free(temp);
}
