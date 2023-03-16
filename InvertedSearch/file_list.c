/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */


#include "inverted_search.h"

void file_validation_n_file_list(Flist **f_head, char *argv[])
{
       //declare variable
       int i = 1 , empty ; 
       
       while(argv[i] != NULL)
       {
      	      empty = isFileEmpty(argv[i]);
      	      //if filename not found
      	      if(empty == FILE_NOTAVAILABLE)
      	      {
	 	     printf("File : %s is not available\n" , argv[i]);
		     printf("Hence we are not adding into the file list\n");
		     i++;
		     continue;
	      }
	      //if file is empty
      	      else if(empty == FILE_EMPTY)
      	      {
	 	     printf("File : %s is not having any contents in it\n" , argv[i]);
		     printf("Hence we are not adding into the file list\n");
		     i++;
		     continue;
      	      }
      	      else
      	      {
	 	     int ret_val = to_create_list_of_files(f_head , argv[i]);
		     if(ret_val == SUCCESS)
		     {
			    printf("Successfull : Inserting the file name : %s into the file linked list\n" , argv[i]);
		     }
		     else if (ret_val == REPEATATION)
		     {
			    printf("This file name : %s is repeated , Hence we are not adding to the list\n" , argv[i]);
		     }
		     else
		     {
			    printf("FAILURE\n");
		     }
		     i++;
		     continue;
	      }
       }
}

// fun is called to check for file availability and for its contents.
int isFileEmpty(char *filename)
{
       //open file as read mode
       FILE *fptr = fopen(filename , "r");
       
       //check file is present or not
       if(fptr == NULL)
       {
      	      if(errno == ENOENT)
      	      {
	 	     return FILE_NOTAVAILABLE;
	      }
       }
       
       //check file is empty or not
       fseek(fptr , 0 , SEEK_END);
       if(ftell(fptr) == 0)
      	      return FILE_EMPTY;
}

int to_create_list_of_files(Flist **f_head, char *name)
{

       // check for filenames are duplicate or not 
       Flist *temp1 = *f_head;
       while(temp1)
       {
	      if(!(strcmp(temp1 -> file_name, name)))
	      {
	     	     printf("dulicate");
	     	     return REPEATATION;
	      }
	      temp1=temp1->link;
       }
       
       // create a file linked list 
       Flist *new = malloc(sizeof(Flist));
       if(new == NULL)
       {
	      return FAILURE;
       }
       //update node parts
       strcpy(new -> file_name,name);
       new -> link = NULL;
       //check for list empty or not
       if(*f_head == NULL)
       {
	      *f_head = new;
	      return SUCCESS;
       }
       //create local referencr pointer
       Flist *temp = *f_head;

       //traversing through the list till last node
       while(temp -> link != NULL)
       {
	      temp = temp -> link;
       } 
       temp -> link = new;
       return SUCCESS;       
}
