#include "tree.h"

int findmax(Tree_t * root)
{
       //checking tree is empty or not
       if(root == NULL)
       {
	      return FAILURE;
       }

       //creating reference pointer
       Tree_t *temp = root;
       //initialize max as root
       int max = root -> data;

       //travesing till last node of tree
       while(temp  != NULL)
       {
	      //if data is smaller than temp data
	      if(max < temp -> data)
	      {
		    //updating max to temp of data
		    max = temp -> data;
	      }
	      //moving to left sub tree
	     temp = temp -> right; 
       }
       return max;
}
