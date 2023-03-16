/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */

#include "inverted_search.h"

void display_database(Wlist *head[])
{
       //print th col names 
       printf("[index]  [word]          file_count file/s  	File: File_name		word_count\n");
       
       //check each index
       for(int i = 0; i < 27; i++)
       {
	      //check head index is empty or not
	      if(head[i] != NULL)
	      {
		     print_word_count(head[i]);
		     
	      }
       }
}

int print_word_count(Wlist *head)
{
       //traverse through the Wlist till last node 
       while(head != NULL)
       {
	      //display index, word ,file_count from Wlist
      	      printf("[%-3d]    [%-10s]    %-3d file/s" , tolower(head -> word[0]) % 97 , head -> word , head -> file_count);
      
	      Ltable *Thead = head -> Tlink;
      	      //traverse through the table till last node 
	      while(Thead)
      	      {
		     //display file_name, word_count from Ltable
	 	     printf("             File : %-10s          %-3d", Thead -> file_name , Thead -> word_count);
		     Thead = Thead -> table_link;
	      }
	      printf("\n");
	      head = head -> link;
       }
       
}


