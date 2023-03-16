#include "stack.h"

/* Function for display the top of the element in Stack */
int Peek(Stack_t *s)
{
/* Checking the Stack is empty or not */
       if(s -> top == -1)
       {
	      return FAILURE;
       }
       /*return element store in top*/ 
       return s -> stack[s -> top];
       
	
}
