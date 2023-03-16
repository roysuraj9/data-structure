#include "main.h"

/* Function to check the number is minimum or maximum to decide the position */
void max_heap(int *heap, int i, int size)
{
       int r, l, large, temp;
       
       l = 2 * i + 1;
       r = 2 * i + 2;

       if(heap[i] < heap[l] && l < size)
       {
	      large = l;
       }
       else
       {
	      large = i;
       }

       if(heap[large] < heap[r] && r < size)
       {
	      large = r;
       }
       
       if(i != large)
       {
	      temp = heap[large];
	      heap[large] = heap[i];
	      heap[i] = temp;

	      max_heap(heap, large, size);
       }
}
