#include "tree.h"

int findmin(Tree_t * root)
{
       //checking tree is empty or not
       if(root == NULL)
       {
	      return FAILURE;
       }

       //creating reference pointer
       Tree_t *temp = root; 
       //initialize min as root
       int min = root -> data;

       //travesing till last node of tree
       while(temp != NULL)
       {
	      //if data is greater than temp data
	      if(min > temp -> data)
	      {
		     //updating min to temp of data
		     min = temp -> data;
	      }
	      //moving to left sub tree
	      temp = temp -> left;
       }
       return min;
}
