#include "queue.h"

//function for checking full or not
int IsQueueFull(Queue_t *q)
{
	if(q -> count == q -> capacity)
	{
		return SUCCESS;
	}
	return FAILURE;   
}

//function for empty or not
int IsQueueEmpty(Queue_t *q)
{
	if(q -> count == 0)
	{
		return SUCCESS;
	}
	return FAILURE;
}
