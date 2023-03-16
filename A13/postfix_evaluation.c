
#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
       int i = 0 , op1, op2, res; 
       while(Postfix_exp[i])
       {
	      if(isdigit(Postfix_exp[i]))
	      {
		     push(stk, Postfix_exp[i] - 48);
	      }
	      else
	      {
		     op2 = peek(stk);
		     pop(stk);
		     op1 = peek(stk);
		     pop(stk);

		     switch(Postfix_exp[i])
		     {
			    case '+':
				   res =  op1 + op2;
				   break;
			    case'-':
				   res = op1 - op2;
				   break; 
			    case'*':
				   res = op1 * op2;
				   break;
			    case'/':
				   res = op1 / op2;
				   break;
		     }
		     push(stk,res);
	      }
 	      i++;
       }
       return res;
}
