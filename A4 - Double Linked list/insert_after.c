#include "dll.h"

int dl_insert_after(Dlist **head, Dlist **tail, int gdata, int ndata)
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

		     if(temp == *tail)
		     {
			    
			    new -> prev = *tail;
			    *tail = new;
			    temp -> next = new;
			    return SUCCESS;
		     }

		     new -> prev = temp;
		     new -> next = temp -> next;
		     temp -> next -> prev = new;
		     temp -> next = new;
		     return SUCCESS;
	      }
	      temp = temp -> next;
       }
       return DATA_NOT_FOUND;
}
