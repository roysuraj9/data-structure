#include "stack.h"

int Push(Stack_t **top, data_t data)
{
/*creating new node*/
       Stack_t *new = malloc(sizeof(Stack_t));
/* Check whether new node created or not */
       if(new == NULL)
       {
	      return FAILURE;
       }
       /*store element in new pointer*/
       new -> data = data;
/*checking top pointer is null or not */
/*for first data*/
       if(*top == NULL)
       {
	      *top = new;
	      (*top) -> link = NULL;
	      return SUCCESS;
       }
       /*update link and top*/
       new -> link = *top;
       *top = new;
       return SUCCESS;
}
