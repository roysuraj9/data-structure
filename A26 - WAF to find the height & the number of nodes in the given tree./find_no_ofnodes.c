#include "tree.h"

int total_nodes(Tree_t *root)
{
//int count = 0;
/* If the root is not equal to NULL */
	if (root != NULL)
	{
		/* Calling the function recursively  */
		return(total_nodes(root -> left) + 1 + total_nodes(root -> right));

		/* Printing the data */
		

		/* Calling the function recursively  */
		//total_nodes(root -> right);
	}
	//return status;
}
