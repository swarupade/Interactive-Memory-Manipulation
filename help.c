#include "help.h"



void help()
{

	FILE *ptr;
	ptr = fopen("help.txt","rb");
	char character;
	character = fgetc(ptr); 
	while (character != EOF) 
	{ 
	       printf ("%c", character); 
	        character = fgetc(ptr);
	} 
	      
        fclose(ptr); 
		
}

				

