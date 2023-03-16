/*
Name : Suraj Roy
Date 29/11/2022
Description : Project - Inverted Search
 */

#include "inverted_search.h"
int main(int argc , char *argv[])
{
       system("clear");
      
       Wlist *head[27] = {NULL};
       int option;
       char opt;
       
       //Validate CLA
       if(argc <= 1)
       {
	      printf("Enter the valid no. arguments \n");
	      printf("./SList.exe file1.txt file2.txt ......\n");
	      return 0;
       }
       //create file list
       //declare the file head
       Flist *f_head = NULL; 
       //validate the files
       
       file_validation_n_file_list(&f_head , argv);
      
       if(f_head == NULL)
       {
	      printf("No files are available in the file LL\n");
	      printf("Hence the process terminated\n");
	      return 1;
       }
      
       //prompt the user for choice
       do
       {
	      printf("\nSelect your choice among following options:\n1. Create Database\n2. Display Database\n3. Update Database\n4. Search\n5. Save Database\n Enter your choice\n");
	      
		     scanf("%d", &option);
		     switch(option)
		     {
			    case 1:
				   //create database
				   create_database(f_head, head);
				   break;
				   
			    case 2:
				   //display the database
				   display_database(head);
				   break;
			    case 3:
				   //update database
				   update_database(head, &f_head);
				   break;
			    case 4:
				   char word[WORD_SIZE];
				   printf("Enter the word to search\n");
				   scanf("%s", word);
				   search(head[tolower(word[0])%97] , word);
				   break;
			    case 5:
				   //save database
				   save_database(head);
				   break;
			    default:
				  printf("Invalid Option"); 
		    
	      }
	      printf("\nDo you want to continue ?\nEnter y/Y to continue and n/N to discontinue\n");
	      getchar();
	      scanf("%c", &opt);
       }
       while(opt == 'Y' || opt == 'y');
}





