#include "dll.h"

int dl_insert_before(Dlist **head, Dlist **tail, int gdata, int ndata)
{
       if(*head == NULL)
       {
	      return LIST_EMPTY;
       }

       Dlist *temp = *head;

       while(temp)
       {
	      if(temp -> data == gdata)
	      {
		     Dlist *new = malloc(sizeof(Dlist));
		     if(new == NULL)
		     {
			    return FAILURE;
		     }
		     new -> data = ndata;
		     new -> prev = NULL;
		     new -> next = NULL;

		     if(temp == *head)
		     {
			    new -> next = *head;
			    *head = new;
			    temp -> prev = new;
			    return SUCCESS;
		     }
		     
		     
		     new -> next = temp;
		     new -> prev = temp -> prev;

		     temp -> prev -> next = new;
		     temp -> prev = new;
		     
		     return SUCCESS;
	      }
	      temp = temp -> next;
       }
       return DATA_NOT_FOUND; 
}
