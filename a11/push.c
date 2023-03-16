#include "stack.h"


/* Fuction for inserting the element */
int Push(Stack_t *s, int element)
{
/* Checking the Stack is full or not */
if(s -> top == s -> capacity - 1)
{
       return FAILURE;
}
//incremnt top and store elemnt in stack
++s -> top;
s -> stack[s -> top] = element;
return SUCCESS;



}
