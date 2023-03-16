/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */

#include "inverted_search.h"

void search(Wlist *head , char *word)
{
       //check list is empty or not 
       if(head == NULL)
       {
      	      printf("List is empty , search word is not found\n");
       }
       //traverse through the Wlist till last node
       while(head)
       {
      	      //compare the node word with search word
      	      if(!(strcmp(head -> word , word)))
      	      {
	 	     printf("word %s is present in %d file/s\n" , word , head -> file_count);
	
		     Ltable *Thead = head -> Tlink;
		     
		     //traverse through the Ltable
		     while(Thead)
		     {
		    	    printf("In file : %s   %d  time/s\n " , Thead -> file_name , Thead -> word_count);
	    		    Thead = Thead -> table_link;
		     }
		     printf("\n");
		     return;
	      }
      	      head = head -> link;
       }
       //if word is not present
       printf("Search word not found in the given Wlist\n");
}
