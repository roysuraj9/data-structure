#include "tree.h"

int find_height(Tree_t *root)
{
 int l_height, r_height;

	//count nodes while Traversing
	if (root == NULL)
	{
		return 0;
	}
	// compute the depth of each subtree

	l_height = find_height(root -> left);
	r_eight = find_height(root -> right);

	// use the larger one
	if (l_height > r_height) 
	{
	return(l_height + 1);
	}
	
	else{ return(r_height + 1);}
}
