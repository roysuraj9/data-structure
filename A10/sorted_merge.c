#include "sll.h"

int sorted_merge( Slist **head1, Slist **head2)
{
       /*checking both list are empty or not*/
       if(*head1 == NULL && *head2 == NULL)
       {
	      return FAILURE;
       }
       /*check first list empty or not*/
       else if(*head1 == NULL)
       {
	      *head1 = *head2;
       }
       /*merging list2  in list1*/
       else
       {
	      Slist *temp = *head1;

	      while(temp -> link != NULL)
	      {
		     temp = temp -> link;
	      }
	      temp -> link = *head2;
       }
       /*fuction call for sort*/
       sort(head1);
}
