#include "sll.h"

/* Function to reverse the given single linked list */
int reverse_iter(Slist **head) 
{
       /*check list is empty or not*/
       if(*head == NULL)
       {
	    return LIST_EMPTY;
       }

       /*creaate local reference pointer*/
       Slist *prev = NULL, *cur = *head, *next;

       /*check cur pointing to NULL or not*/
       /*reverse logic*/
       while(cur != NULL)
       {
	      /*update link*/
  	      next = cur -> link;
  	      cur -> link = prev;
  	      prev = cur;
  	      cur = next;
       }

       /*update head pointer with next pointer*/
       *head = prev;
       return SUCCESS;
} 
