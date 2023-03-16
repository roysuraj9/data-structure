#include "tree.h"

/* Function to print the tree in pre order */
int preorder(Tree_t *root)
{
       //if root is not empty
       if(root != NULL)
       {
	      //print data
	      printf("%d", root->data);
	      //move to left sub tree
	      preorder(root->left);
	      //move to right sub tree
	      preorder (root->right);
       }
}
