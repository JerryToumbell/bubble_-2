#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_utilities.h"


int main()
{
	FILE *result = fopen("result.txt","a+" );


	srand ((unsigned)time (NULL));	
  	int size;

  	time_t start,end;
  	double time;
  	double sumtime = 0;
  	double sredtime = 0;

  	for (size=10;size<=10000;) //до 10000

	{
	
	sumtime = 0;	
	
	for (int t=0;t<10;t++)
	{
		
	int *test = generateArrayOfRandomIntegers(size);
  	// printIntArray(test, size);
 	
 	start=clock();
 	int *testic = bubbleSortedArrayFromArray(test,size);
  	end = clock();

  	// printIntArray(testic, size);
	
	time = (end-start)/(double)CLOCKS_PER_SEC;
	//printf("%.6lf\n",time);
	
	sumtime +=time;
	sredtime = sumtime/10;

	}
	
	//printf("%lf\n",sumtime );
	fprintf(result, "AVG sorting time=%.7lf\tArraysize=%d\n",sredtime,size );
	
	if (size<100)
		 size +=10;
	else if (size<1000)
		 size +=100;
	else size +=500;
}
	fclose(result);
	printf("End of sorting\n");
  	return 0;
}










