#include "tree.h"

/* Iteratively */
int search_BST(Tree_t *root, int data)
{
       //checking tree is empty or not
       if(root == NULL)
       {
	      return FAILURE;
       }

       //creating reference pointer
       Tree_t *temp = root;

       //travesing till last node of tree
       while(temp != NULL)
       {
	      //if data smaller than temp data moving to left sub tree
	      if(data < temp -> data)
	      {
		     temp = temp -> left;
	      }
	      //if data smaller than temp data moving to right sub tree
	      else if(data > temp -> data)
	      {
		     temp = temp -> right;
	      }
	      //data founded
	      else
	      {
		     return SUCCESS;
	      }
       }
       //if data is not present
       return NOELEMENT;
}
