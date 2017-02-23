#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_utilities.h"

int *generateArrayOfRandomIntegers(int size)
{	
	int *array = (int *)malloc(size * sizeof(int));
	int i;
 	
	for (i=0; i<size; i++)
		array[i] = rand();
			
return array;

}

void printIntArray(int *array, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");  
}

int *bubbleSortedArrayFromArray(int *array, int size)
{
    
    int buf, i, j;

 
    for(i = 0; i < size - 1; ++i)
    {            
        for(j = 0; j < size - 1; ++j) 
        {     
            if (array[j + 1] < array[j]) 
            {
                buf = array[j + 1]; 
                array[j + 1] = array[j]; 
                array[j] = buf;
            }
        }
    }	
    		return array;

}