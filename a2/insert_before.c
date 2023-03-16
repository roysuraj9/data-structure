#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{
/*check list empty or not*/
if(*head == NULL)
{
return LIST_EMPTY;
}
/*create node*/
Slist *new = malloc(sizeof(Slist));
/*check if node create or not*/
       	if(new == NULL)
       	{
       	return FAILURE;
       	}
/*local reference*/
 Slist *temp = *head ;
 Slist *prev;
 /*single node present*/
 if(temp->data == g_data)
 {
 new -> data= ndata;
 new->link = *head;
 *head = new;
 return SUCCESS;
 } 
 /*Traversing till NULL is reached*/
 while(temp != NULL){
 if(temp -> data == g_data)
 {
 new-> data = ndata;
 new -> link = prev -> link;
 prev -> link = new;
 return SUCCESS;
 } 
 /*update link*/
 prev =temp;
 temp=temp->link;
 
 }
 return DATA_NOT_FOUND;
 

}
