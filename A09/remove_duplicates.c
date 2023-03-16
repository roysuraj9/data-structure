#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
       /*check list is empty or not*/
       if(*head == NULL)
       {
	      return FAILURE;
       }
       /*checking single node present or not*/
       if((*head) -> link == NULL)
       {
	      return SUCCESS;
       }
       /*create reference pointer*/
       Slist *temp1 = *head, *temp2 , *prev , *next;

       while(temp1)
       {
	      /*initialize prev and temp2*/
	      prev = temp1;
	      temp2 = temp1 -> link;

	      while(temp2)
	      {
		     /*if both data are same then update next , prev and free temp2 */
		     if(temp1 -> data  == temp2 -> data)
		     {
			    next = temp2 -> link;
			    prev -> link = next;
			    temp2 -> link = NULL;
			    free(temp2);
			    temp2 = next;
		     }
		     /*increment prev and temp2 when data different*/
		     else
		     {
			    prev = prev -> link;
			    temp2 = temp2 -> link;
		     }
	      }
	      /*update temp1*/
	      temp1 = temp1 -> link;

       }
       return SUCCESS;
}
