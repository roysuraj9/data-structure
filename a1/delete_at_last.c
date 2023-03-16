#include "sll.h"

int sl_delete_last(Slist **head)
{
       //if list is empty
       if(*head == NULL)
       {
	      return FAILURE;
       }

       Slist *temp = *head;
       Slist *prev;
       //Check for first node ,free head and update head to NULL
       if (temp->link == NULL)
       {
	      free(*head);
	      *head = NULL;
	      return SUCCESS;
       }
       //Traverse till the last node
       while(temp->link != NULL)
       {
       	      prev = temp;
	      temp = temp->link;
       }
       //free temp and updating prev link to NULL
       free(temp);
       prev->link = NULL;
       return SUCCESS;       
}
