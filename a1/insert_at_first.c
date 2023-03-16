#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
       Slist *new = malloc(sizeof(Slist));

       //Error check
       if(new == NULL)
       {
	      return FAILURE;
       }

       //update node parts
       new->data = data;
       new->link = NULL;

       //check for list empty or not

       if(*head == NULL)
       {
	      *head = new;
	      return SUCCESS;
       }
       else
       {
	      new->link = *head;
	      *head = new;
       }
}
