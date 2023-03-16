#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
/*check list empty or not*/
if(*head == NULL)
{
return LIST_EMPTY;
}
/*local reference*/
Slist *temp = *head;
while(temp != NULL && temp -> data != g_data)
{
temp = temp -> link;
}
if(temp != NULL)
{
/*create node*/
Slist *new = malloc(sizeof(Slist));
/*check if node create or not*/
if(new == NULL)
{
return FAILURE;
}
/*update data and link*/
new ->data = ndata;
new-> link = temp -> link;
temp -> link = new;
return SUCCESS;
}
return DATA_NOT_FOUND;
}
