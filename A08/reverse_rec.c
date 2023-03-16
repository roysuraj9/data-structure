#include "sll.h"

int reverse_recursion(Slist **head)
{
      /*check list is empty or not*/
       if(*head == NULL)
       {
	    return LIST_EMPTY;
       }

       /*creaate local reference pointer*/
       static Slist *prev = NULL, *cur, *next;
       cur = *head;
       
       /*reverse logic*/
       
       /*update link*/
       next = cur -> link;
       cur -> link = prev;
       prev = cur;
       cur = next;
       
       /*check cur pointing to NULL or not*/
       if(cur != NULL)
       {
	      reverse_recursion(&cur);
       }
       
       /*update head pointer with next pointer*/
       *head = prev;
       return SUCCESS;
}
