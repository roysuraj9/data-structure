/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */

#include "inverted_search.h"

//taking global variable
char *fname;

void create_database(Flist *f_head, Wlist *head[])
{
       //traverse through the file linked list
       while(f_head)
       {
	      read_datafile(f_head, head, f_head -> file_name);
	      f_head = f_head -> link;
       }
}

//read the contents of the file
Wlist* read_datafile(Flist *file, Wlist *head[], char *filename)
{
       fname = filename;
       //open the file in read mode
       FILE *fptr = fopen(filename, "r");
       //declare an array to store the words
       char word[WORD_SIZE];

       while(fscanf(fptr, "%s", word) != EOF)
       {
	      //initialize
	      int flag = 1;
	      //index
	      int index = tolower(word[0]) % 97;
	      //other than alphabets
	      if(!(index >= 0 && index <= 25))
		     index = 26;

	      
	      if(head[index] != NULL)
	      {
		     Wlist *temp = head[index];
		     //compare the word at each node with new word
		     while(temp)
		     {
			    //if word already present in word list
			    if(!(strcmp(temp -> word, word)))
			    {
				   update_word_count(&temp, filename);
				   flag = 0;
				   break;
			    }
			    temp = temp -> link;
		     }
	      }

	      if(flag == 1)
	      {
		     //word are not repeated
		     insert_at_last(&head[index], word);
	      }
       }
       //close file
       fclose(fptr);
}

int update_word_count(Wlist **head, char *file_name)
{
       //create reference pointer
       Ltable *Thead = (*head) -> Tlink, *temp;
  
       //check whether filenames are same or not
       while(Thead)
       {
	      //if filenames are same increement word_count
	      if(!(strcmp(Thead -> file_name, file_name)))
	      {
		     Thead -> word_count = Thead -> word_count + 1;
		     return SUCCESS;
	      }
	      temp = Thead;
	      Thead = Thead -> table_link;
       }

       //if filename are different ->> increment the file_count, create Ltable
       //create new node
       Ltable *new = malloc(sizeof(Ltable));
       
       //check node is created or not
       if(new == NULL)
       {
	      return FAILURE;
       }
       
       //update file_name, word_count and link
       strcpy(new -> file_name, file_name);
       new -> word_count = 1;
       new -> table_link = NULL;

       //increement file count
       (*head) -> file_count = (*head) -> file_count + 1;
       
       //update link
       temp -> table_link = new;
       return SUCCESS;
}
