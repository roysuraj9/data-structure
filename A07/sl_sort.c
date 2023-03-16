#include "sll.h"

int sl_sort(Slist **head)
{
int flag =0;
       /*check list is empty or not*/
       if(*head == NULL)
       {
	    return LIST_EMPTY;
       }
       /*list contain single node*/
       if((*head) -> link == NULL)
       {
       return SUCCESS;
       }
       do
       {
       
       /*create reference pointer*/
       Slist *prev = NULL, *cur = *head, *next = cur -> link;
       flag =0;
       /*running loop till next is NULL*/
       while(next != NULL)
       {
	      /*compare data*/
	      if(cur -> data > next-> data)
	      {
	      flag = 1;
		     /*checking prev is null or not*/
		     if(prev == NULL)
		     {
			    Slist *temp = next -> link;
			    *head = next;
			    next -> link = cur;
			    cur -> link = temp;
		     }
		     else
		     {
			    Slist *temp = next -> link;
			    prev -> link = next;
			    next -> link = cur;
			    cur -> link = temp;
		     }
		     /*increment pointers update link*/
		     prev = next;
		     next = cur -> link;
	      }
	      /*if cur data is small than next data update links*/
	      else
	      {
		     prev = cur;
		     cur = next;
		     next = next -> link;
	      }
       
       }
       }while(flag != 0);
       return SUCCESS;
}
