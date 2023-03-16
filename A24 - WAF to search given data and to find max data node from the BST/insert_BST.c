#include "tree.h"

/* Function to insert the data's in BST */
int insert_into_BST(Tree_t **root, int data)
{
       //declare variable
       int flag;
       
       //creatinig a tree node
       Tree_t *new = malloc(sizeof(Tree_t));

       //checking node created or not
       if(new == NULL)
       {
	      return FAILURE;
       }
       //update data and link
       new -> data = data;
       new -> left = NULL;
       new -> right = NULL;

       //checking tree is empty or not
       if(*root == NULL)
       {
	      //root is empty insert root
	      *root = new;
	      return SUCCESS;
       }
       //creating reference pointer
       Tree_t *temp = *root, *Parent;

       //traverse till last tree node
       while( temp != NULL)
       {
	      //updating parent to temp
	      Parent = temp;

	      //if given data is smaller then data present in temp
	      if(data < temp -> data)
	      {
		     //move to left sub tree
		     temp = temp -> left;
		     flag = 1;
	      }

	      //if given data is greater then data present in temp
	      else if(data > temp -> data)
	      {
		     //move to right sub tree
		     temp = temp -> right;
		     flag = 0;
	      }
	      //given data is duplicate
	      else
	      {
		     return DUPLICATE;
	      }
       }
       //updating parent link to new depend on flag
       if(flag == 1)
       {
	      //update parent left with new address
	      Parent -> left = new;
	      return SUCCESS;
       }
       else
       {
	      //update parent right with new address
	      Parent -> right = new;
	      return SUCCESS;
       }
}
