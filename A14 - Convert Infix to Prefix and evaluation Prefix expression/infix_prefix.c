#include "main.h"

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{
       int i= 0, j = 0;
       while (Infix_exp[i])
       {
	      //check if character is digit or not
	      if (isdigit(Infix_exp[i]))
	      {
		     //storeing character in array
		     Prefix_exp[j++] = Infix_exp[i];
	      }
	      //if not digit
	      else{
		     //if stack is empty
		    if(stk -> top == - ){
			   //store chacater in stack
			   push(stk, Infix_exp[i]);
					 }
		    else if (Infix_exp[i] == ')')
		    {
		     push(stk, Infix_exp[i]);
	      }
		    //if ( is present remove all item from stack till )
		    
	      else if (Infix_exp[i] == '(')
	      {
		     while (stk -> stack[stk -> top] != ')')
		     {
			    Prefix_exp[j++] = peek(stk);
			    pop(stk) ;
		     }
		     //discard )
		     pop(stk) ;
	      }
	      else
	      {
		     //compare stack item to scan item
		     while (stk -> top != -1/* && stk -> stack[stk -> top] != ')'*/ && priority(Infix_exp[i]) < priority(stk -> stack[stk -> top]))
		     //if stack item high priority then store it into prefix array and then store scan item
		     {
			    Prefix_exp[ j++] = peek(stk);
			    pop(stk) ;
		     }
		     push(stk, Infix_exp[i]);
	      }
	      }
	      i++;
       }
       //when reaches to end od expression empty stack and discard ( )
       while(stk -> top != -1)
       {
	      Prefix_exp[j++] = peek(stk);
	      pop(stk) ;
       }
       Prefix_exp[j] = '\0';
       return 0;
}
