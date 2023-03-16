#include "queue.h"

/* Function to deque the element */
int dequeue(Queue_t *q)
{
	//checking stack is empty or not 
	if(IsQueueEmpty(q) == SUCCESS)
	{
		q -> front = -1;
		q -> rear = -1; 
		return FAILURE;
	}

	//fetching the first value and discard it
	q -> front = (q -> front + 1) % (q -> capacity);
	--(q -> count);
	return SUCCESS;
}
