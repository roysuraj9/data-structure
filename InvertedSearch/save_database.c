/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */

#include "inverted_search.h"

void save_database(Wlist *head[])
{
       //prompt the user to enter new file_name for saving the database
      
       char file_name[FNAME_SIZE];
       printf("Enter the filename\n");
       scanf("%s" , file_name);
      
       //open the file in write mode
       FILE *fptr = fopen(file_name , "w");
       //header
       fprintf(fptr," [index]  [word]          file_count file/s  	File: File_name		word_count\n");
       
       for(int i = 0 ; i < 27 ; i++)
       {
	      //check index is empty or not
      	      if(head[i] != NULL)
      	      {
	 	     write_databasefile(head[i] , fptr);
	      }
       }
       //close flie
       fclose(fptr);
}

void write_databasefile(Wlist *head , FILE *databasefile)
{
       // # : [index]   [word]  :  [file_count]  :  [file_name]   :  [word_count] 
       
       //traverse through the Wlist till last node 
       while(head)
       {
	      //writing index, word ,file_count from Wlist to file
	      fprintf(databasefile,"\n\n# [%-3d]    [%-10s]    %-3d file/s", tolower(head->word[0])%97, head -> word, head ->file_count );

	      Ltable *Thead = head -> Tlink;
	      
	      while(Thead)
	      {
		     //writing index, word ,file_count from Ltable to file
		     fprintf(databasefile, "             File : %-10s          %-3d", Thead -> file_name, Thead -> word_count);
		     Thead = Thead -> table_link;
	      }
	      head = head -> link;
       }
}
