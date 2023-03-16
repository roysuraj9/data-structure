#include "main.h"

/* Function to sort the array using heap sort */
int heap_sort(int *heap, int size )
{
       build_maxheap(heap, size);
       int temp, index = size - 1;

       while(index >= 0)
       {
	      temp = heap[0];
	      heap[0] = heap[index];
	      heap[index] = temp;

	      max_heap(heap, 0, index);
	      index--;
       }
}       
