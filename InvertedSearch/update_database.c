/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */

#include "inverted_search.h"

void update_database(Wlist *head[] , Flist **f_head)
{ 
       //declare variable
       int empty;
       char *file_name[FNAME_SIZE];
       
       //prompt the user to enter
       printf("Enter the filename\n");
       scanf("%s", *file_name);
			    
       //validate the file_name      
       empty = isFileEmpty(*file_name);
       //if filename not found
       if(empty == FILE_NOTAVAILABLE)
       {
  	      printf("File : %s is not available\n" , *file_name);
  	      printf("Hence we are not adding into the file list\n");
       }
       //if file is empty
       else if(empty == FILE_EMPTY)
       {
  	      printf("File : %s is not having any contents in it\n" , *file_name);
  	      printf("Hence we are not adding into the file list\n");
       }
       else
       {
  	      int ret_val = to_create_list_of_files(f_head , *file_name);

	      if(ret_val == SUCCESS)
	      {
	     	     printf("Successfull : Inserting the file name : %s into the file linked list\n" , *file_name);
	      }
	      else if (ret_val == REPEATATION)
	      {
	     	     printf("This file name : %s is repeated , Hence we are not adding to the list\n" , *file_name);
	      }
	      else
	      {
		printf("FAILURE\n");
	      }
       }

       //creating database
       while(*f_head)
       {
      	      //if filename is not same as existing filename
      	      if(strcmp((*f_head) -> file_name, *file_name))
      	      {
	 	     create_database(*f_head, head);
	      }
      	      *f_head = ((*f_head) -> link);
       }
}	
