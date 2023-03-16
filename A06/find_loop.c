#include "sll.h"

/* Function for finding the loop in the link */
int find_loop(Slist *head)
{
        if(head == NULL)
       {
	      return LIST_EMPTY;
       }
       /*create local referencr pointer*/
       Slist *temp1 = head;
       Slist *temp2 = head;
       
       /*traversing through the list till last node*/
       while(temp1 != NULL && temp1 -> link != NULL )
       {
       /*update temp1 two times and temp2 once*/
	     temp1 = temp1 -> link;
	     temp1 = temp1 -> link;
	     temp2 = temp2 -> link;
	/*if both pointer pointing same pointer*/     
	     if(temp1 == temp2)
	     return SUCCESS;
       }
       return LOOP_NOT_FOUND;

}
