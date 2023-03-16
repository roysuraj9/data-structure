#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
       //create node

       Slist *new = malloc(sizeof(Slist));

       //Error check 
       if(new == NULL)
       {
	      return FAILURE;
       }

       //update node parts
       new -> data = data;
       new -> link = NULL;

       //check for list empty or not
       if(*head == NULL)
       {
	      *head = new;
	      return SUCCESS;
       }
       //create local referencr pointer
       Slist *temp = *head;

       //traversing through the list till last node
       while(temp -> link != NULL)
       {
	      temp = temp -> link;
       }
       
       temp -> link = new;
       return SUCCESS;
} 
