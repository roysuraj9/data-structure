#include "main.h"

int priority(char opr)
{
       switch(opr)
       {
 	      case '+':
    		     return 2;
	      case '-':
       		     return 2;
	      case '*':
		     return 3;
	      case '/':
       		     return 3;
	      case '(':
		     return 1;
	      case ')':
		     return 1;
       }
}

void push(Stack_t *stk, int data)
{
	++(stk -> top);
	stk -> stack[stk -> top] = data;
}

void pop(Stack_t *stk)
{
	if (stk -> top != -1)
		--(stk -> top);
}

int peek(Stack_t *stk)
{
	if (stk -> top != -1)
	{
		return stk -> stack[stk -> top];
	}
	return -1;
}

