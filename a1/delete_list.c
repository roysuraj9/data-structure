#include "sll.h"

int sl_delete_list(Slist **head)
{
     if(*head == NULL)
       {
	      return FAILURE;
       }

       Slist *temp;

       //Traverse till the last node and free memory
       while((*head) != NULL)
       {	      
       temp = *head;
	      *head = temp->link;
	      free(temp);
       }
       return SUCCESS;      	
}
