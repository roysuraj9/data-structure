#include "sll.h"

int find_node(Slist *head, data_t data)
{
        int count = 0;
       if(head == NULL)
       {
	      return FAILURE;
       }

       //Check for first node
	if ((head)->data == data)
	{
        count++;
		return count;
	}
       //create local referencr pointer

       Slist *temp = head;

       //traversing through the list till last node

       while(temp != NULL)
       {
       count++;
	      if(temp->data == data)
	      {
		     return count;
	      }
	      temp = temp->link;

       }
       return FAILURE;
} 
