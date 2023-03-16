#include "stack.h"

int Peek(Stack_t **top)
{
/* Checking the stack is empty or not */
       if(*top == NULL)
       {
	      return FAILURE;
       }
/*return data from top*/
       return (*top) -> data; 
}
