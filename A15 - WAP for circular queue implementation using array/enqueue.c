#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
	//checking stack is full or not
	if(IsQueueFull(q) == SUCCESS)
	{
		return FAILURE;
	}
	//make front to 0
	if(q -> front == -1)
	{
		q -> front = q -> front + 1;
	}
	//formula for find rear
	q -> rear = (q -> rear + 1) % (q -> capacity);
	//inserting data
	q -> Que[q -> rear] = data;
	++(q -> count);
	return SUCCESS; 
}
