#include "stack.h"

/* Function for Poping the element */
int Pop(Stack_t *s)
{
/* Checking the Stack is empty or not */	
if(s -> top == -1)
{
return FAILURE;
}
//decrement top
(s -> top)--;
return SUCCESS;
}
