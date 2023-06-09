#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
       int i= 0, j = 0;

       while (Infix_exp[i])
       {
	      if(isdigit(Infix_exp[i]))
	      {
		     Postfix_exp[j++] = Infix_exp[i];
	      }
	   
	      else
	      { 
		     if(stk->top == -1)
		     {
			    push(stk, Infix_exp[i]);
			  //  i++;
			   // continue;
		     }
		     else if(Infix_exp[i] == '(')
			    push(stk,Infix_exp[i]);
		     
		     else if(Infix_exp[i]== ')')
		     {
			    while(stk->stack[stk->top] != '(')
			    {
				   Postfix_exp[j++] = peek(stk);
				   pop(stk);    	   
			    }
			    pop(stk);
		     }
		    
		     else if (stk -> top != -1 && priority(Infix_exp[i]) <= priority(stk->stack[stk->top]))
		     {
			    Postfix_exp[j++] = peek(stk);
			    pop(stk);
			    
			    push(stk,Infix_exp[i]);
			    //i++;
			    //continue;
		     }
		     else 
		     {
			    push(stk,Infix_exp[i]);
			    // i++;
     // continue;
		     }
	      }     
	      i++;
       }

while(stk ->top != -1)
 {
     if(peek(stk) != '(' && peek(stk) != ')')
       Postfix_exp[j++] = peek(stk);
     pop(stk);
 }
     Postfix_exp[j] = '\0';
     return 0;
 }

//2*3–3+8/4/(1+1)
