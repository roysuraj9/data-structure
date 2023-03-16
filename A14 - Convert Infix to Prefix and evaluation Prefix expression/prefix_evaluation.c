#include "main.h"

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
	// initaiize variable
       int i = 0 , op1, op2, res; 
       while(Prefix_exp[i])
       {
       //if character is digit push it to stack
	      if(isdigit(Prefix_exp[i]))
	      {
	      //first convert char into int
		     push(stk, Prefix_exp[i] - 48);
	      }
	      //item on top will op1 and second time is op2
	      else
	      {
		     op1 = peek(stk);
		     pop(stk);
		     op2 = peek(stk);
		     pop(stk);
		     //operator
		     switch(Prefix_exp[i])
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
		     //push return back to stack
		     push(stk,res);
	      }
	      //increement
 	      i++;
       }
       //return res to main
       return res;

}
