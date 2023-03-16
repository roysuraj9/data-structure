#include "tree.h"

extern int status;
/* Function to delete the node  */
Tree_t * delete_BST(Tree_t * root, int data)
{
    //local refernce to the tree
    Tree_t *temp;
    
    //if tree is empty 
    if ( NULL == root)
    {
        return root;
    }
    
    //if data to be deleted is less than the root, then it lies in left subtree
    if (data < root->data)
    {
        root -> left = delete_BST(root -> left, data);
 	}
 	
 	//if the data to be deleted is greater than the root, then it lies in right subtree
 	else if (data > root -> data)
 	{
 	    root -> right = delete_BST(root -> right, data);
 	}
 	
 	//if data is same as root data, then the node to be deleted
 	else
 	{
 	    status = 1;
 	    //check for leaf node
 	    if (root -> left == NULL && root -> right == NULL)
 	    {
 	        temp = NULL;
 	        free(root);
 	        return temp;
 	    }
 	    // node with only one child or no child
 	    else if (root -> left == NULL && root -> right != NULL)
 	    {
 	        temp = root -> right;
 	        free(root);
 	        return temp;
 	    }
 	    else if (root -> right == NULL && root -> left != NULL)
 	    {
 	        temp = root -> left;
 	        free(root);
 	        return temp;
 	    }
 	    else
 	    {
 	        // node with two children find min of right subtree
 	        //temp -> data 
 	        int min= findmin(root -> right);
 	        
 	        root -> data = min;// temp -> data; 			
 	        // Delete the inorder successor
 	        root -> right = delete_BST(root -> right, min);// temp -> data);
 	    }
 	}
 	return root;
}
