#include "dll.h"

int dl_delete_element(Dlist **head, Dlist **tail, int data)
{
    //checking list empty or not
    if(*head == NULL)
    {
        return LIST_EMPTY;
    }
    //create reference pointer
    Dlist *temp = *head;
    
    while(temp)
    {
        //if data found
        if(temp -> data == data)
        {
            //if list has single node
            if((*head) -> next == NULL)
            {
                //freeing temp and update links
                free(temp);
                *head = NULL;
			    *tail = NULL;
            }
            //first node data is equal to data
            else if(temp == *head)
            {
                //update head and free temp
                *head = temp -> next;
			    (*head) -> prev = NULL;
			    free(temp);
            }
            //if last node is equal to data
            else if(temp == *tail)
            {
                //update tail and free temp
                *tail = temp -> prev;
                (*tail) -> next = NULL;
                free(temp);
            }
            //else update next of previous node and prev of next node and free temp 
            else
            {
                temp -> prev -> next = temp -> next;
                temp -> next -> prev = temp -> prev;
                free(temp);
            }
            return SUCCESS;
        }
        //update temp
        temp = temp -> next;
    }
    return DATA_NOT_FOUND;
}
