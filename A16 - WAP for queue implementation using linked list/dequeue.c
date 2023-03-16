#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
       if(*front == NULL)
       {
	      return FAILURE;
       }

       if(*front == *rear)
       {
	      free(*front);
	      *front = NULL;
	      *rear = NULL;
	      return SUCCESS;
       }
       Queue_t *temp = *front;

       *front = (*front) -> link;
       free(temp);
       (*rear) -> link = *front;
       return SUCCESS;
}
