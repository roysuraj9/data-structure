#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
	/*check list is empty or not*/
	if(*head == NULL)
	{
		return FAILURE;
	}
	/*creating a local refrence*/
	Slist *temp = *head;
	Slist *prev = NULL;
	
	/*check for first node*/
	if((*head) -> data == data)
	{
	
	/*assigning head with second node address*/
		*head = temp -> link;
		/*free first node*/
		free(temp);
		return SUCCESS;
	}
	
	/*Traversing till n_data is reached*/
	while(temp)
	{ 
	if(temp-> data == data)
	{
	/*update link*/
		prev -> link = temp -> link;
		free(temp);
		return SUCCESS;
	}
	/*update prev and temp1*/
	prev = temp;
	temp = temp -> link;
	
	}
	return DATA_NOT_FOUND;
}
