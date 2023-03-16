#include "sll.h"

int sl_insert_nth(Slist **head, data_t data, data_t n)
{
    int count = 1;
    /*if list empty and position is 1*/
    if((*head) == NULL)
    {
        if(n == 1)
        {
            insert_at_first(head, data);
            return SUCCESS;
        }
        return LIST_EMPTY;
    }
    /*if single node and position is 1*/
    if((*head) -> link == NULL)
    {
        if(n == 1)
        {
            insert_at_first(head, data);
            return SUCCESS;
        }
        return POSITION_NOT_FOUND; 
    }
    /*multi node present and position 1*/
    if((*head) -> link != NULL)
    {
        if(n == 1)
        {
            /*create node*/
            Slist *new = malloc(sizeof(Slist));
            /*check if node create or not*/
            if(new == NULL)
            {
                return FAILURE;
                
            }
            /*update link and data*/
            new -> data = data;
            new -> link = *head;
            *head = new;
       		return SUCCESS;
       	}
    }
    /*local reference to traverse through the link*/
    Slist *temp = *head;
    
    /*Traversing till NULL is reached*/
    while(temp != NULL)
    {
        count++;
        if(count == n)
        {
            Slist *new = malloc(sizeof(Slist));
            if(new == NULL)
            {
                return FAILURE;
                
            }
            new -> data = data;
            new -> link = temp -> link;
            temp -> link = new;
            return SUCCESS;
        }
        else
        {
            temp = temp -> link;
        }
    }
    return POSITION_NOT_FOUND;
}
