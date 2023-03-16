#include "sll.h"
/* Function to get the middle of the linked list*/
int find_mid(Slist *head, int *mid) 
{ 
       /*check for list empty or not*/
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
	     
       }
       /*store temp2 data in mid*/
       *mid = temp2 -> data;
       return SUCCESS;
} 
