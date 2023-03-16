#include "sll.h"

/* Function to create the loop */
int create_loop(Slist **head, data_t data)
{
/*checking list is empty or not*/
       if(*head == NULL)
       {
	      return LIST_EMPTY;
       }
       
       Slist *temp1 = *head, *temp2 = NULL;
       
        /*traversing through the list till last node*/
       while(temp1 != NULL)
       {
       /*if data is found store in temp2*/
	      if(temp1 -> data == data)
	      {
		     temp2 = temp1;
	      }
	      temp1 = temp1 -> link;
       }
       /*after data found update last link to data found pointer*/
       if(temp2 == NULL)
       {
       return DATA_NOT_FOUND;
       }
	      temp1 -> link = temp2;
	      return SUCCESS;
       
       
}
