#include "sll.h"
/* Function to get the nth node from the last of a linked list*/
int find_nth_last(Slist *head, int pos, int *data) 
{
/*check for list empty or not*/
      if(head == NULL)
      {
	    return LIST_EMPTY;
      }
      if(pos == 0)
      {
      	    return FAILURE;
      }

/*create local referencr pointer*/
      Slist *temp1 = head;
      Slist *temp2 = head;

/*traversing through the list till last node*/   
      while(temp1 != NULL)
      {
      /*update temp1 link*/
	     temp1 = temp1 -> link;
	     
	     if(pos != 0)
	     {
		    pos = pos -1;
	     }
	     /*update temp2 link if pos become 0*/
	     else
	     {
		    temp2 = temp2 -> link;
	     }

      }
      /*check pos 0 or not*/
      if(pos != 0)
      {
	     return FAILURE;
      }
      /*store temp2 data in data */
      *data= temp2 -> data;
      return SUCCESS;
      

} 
