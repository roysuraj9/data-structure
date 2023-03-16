#include "tree.h"

/* Function to print the tree in post order */
int postorder(Tree_t *root)
{
       //if root is not empty
       if(root != NULL)
       {
	      //move to left sub tree
	      postorder(root->left);
	      //move to right sub tree
	      postorder (root->right);
	      //print data
	      printf("%d", root->data);
       }
}
