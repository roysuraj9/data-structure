#include "stack.h"

int Pop(Stack_t **top)
{
/* Checking the Stack is empty or not */
if(*top == NULL)
{
return FAILURE;
}
/*create local referencr pointer*/
Stack_t *temp = *top;
/*update top link*/
*top = temp -> link;
/*freeing temp*/
free(temp);
return SUCCESS;
}
