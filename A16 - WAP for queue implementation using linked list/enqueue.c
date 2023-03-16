#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
       Queue_t *new = malloc(sizeof(Queue_t));
       if(new == NULL)
       {
	      return FAILURE;
       }
       new -> data = data;
       new -> link = NULL;

       if(*front == NULL)
       {
	      *front = new;  
	      *rear = new;
       }
       else
       {
	      (*rear) -> link = new;
	      *rear = new;
       }
       new -> link = *front;
       return SUCCESS;
}
