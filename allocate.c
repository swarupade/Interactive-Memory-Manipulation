#include "allocate.h"
#include "stdint.h"
#include "stdlib.h"

void allocate()
{
		printf("\n Enter the number of 32bit words to be allocated\n");
		uint32_t number;
		scanf("%d",&number);

		uint32_t *ptr = (uint32_t *) malloc(number*sizeof(uint32_t));
		if(ptr!=NULL)
		{
			printf("\nAllocated %d number of 32bits successfully\n",number);
		}
}


